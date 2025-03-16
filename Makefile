.SECONDEXPANSION:
.SECONDARY:
.DEFAULT_GOAL := all

### Begin new header ###
PHONY_TARGETS := # Empty variable
MUFFLED_TARGETS := # Empty variable

# Sets VERSION and VENV_DIR if not defined
VERSION		?= us
VENV_DIR	?= .venv
# For disambiguation/escaping of characters
comma		:= ,
# Allows DEBUG to unmuffle targets which can't use .SILENT
muffle 		:= $(if $(DEBUG),,@)

# Utility functions
rwildcard	= $(subst //,/,$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d)))
echo		= $(if $(and $(QUIET),$2),,echo -e "$(subst //,/,$1)";)# Allows for optional terminal messages
to_upper	= $(shell echo $(1) | tr '[:lower:]' '[:upper:]')
to_lower	= $(shell echo $(1) | tr '[:upper:]' '[:lower:]')
if_version	= $(if $(filter $1,$(VERSION)),$2,$3)
wget		= wget -a wget-$(or $3,$2,$1).log $(if $2,-O $2 )$1

# System related variables
OS 				:= $(subst Darwin,MacOS,$(shell uname -s))
SYSTEM_PYTHON	:= $(or $(shell which python),/usr/bin/python3)# Only used for installing venv
PYTHON_BIN		:= $(or $(realpath $(VENV_DIR)/bin/))
PYTHON          := $(and $(PYTHON_BIN),$(PYTHON_BIN)/)python3# This is slightly redundant to handle the slash
PIP			 	:= $(VENV_DIR)/bin/pip3# Pip will always use venv
BASH			:= $(or $(shell which bash),/usr/bin/bash)
BASH_FLAGS	  	:= -e -o pipefail
SHELL 			:= $(BASH) $(BASH_FLAGS)

# Directories
BIN_DIR			:= bin
ASM_DIR         := asm/$(VERSION)
ASM_SUBDIRS 	:= data/ $(call if_version,us hd,psxsdk/ handwritten/)
SRC_DIR         := src
SRC_SUBDIRS 	:= $(call if_version,us hd,psxsdk/)
INCLUDE_DIR     := include
ASSETS_DIR      := assets
CONFIG_DIR      := config
TOOLS_DIR       := tools
BUILD_DIR       := build/$(VERSION)
PY_TOOLS_DIRS	:= $(TOOLS_DIR)/ $(addprefix $(TOOLS_DIR)/,splat_ext/ split_jpt_yaml/ sotn_str/ sotn_permuter/permuter_loader)
RETAIL_DISK_DIR := disks
EXTRACTED_DISK_DIR := $(RETAIL_DISK_DIR)/$(VERSION)
BUILD_DISK_DIR  := $(BUILD_DIR)/disk

# Files
CHECK_FILES 	:= $(shell cut -d' ' -f3 $(CONFIG_DIR)/check.$(VERSION).sha)
ST_ASSETS		:= D_801*.bin *.gfxbin *.palbin cutscene_*.bin
CLEAN_FILES		:= $(ASSETS_DIR) $(ASM_DIR) $(BUILD_DIR) $(SRC_DIR)/weapon $(CONFIG_DIR)/*$(VERSION)* function_calls sotn_calltree.txt
FORMAT_SRC_IGNORE	:= $(call rwildcard,src/pc/3rd/,*)
FORMAT_SRC_FILES	:= $(filter-out $(FORMAT_SRC_IGNORE),$(call rwildcard,$(SRC_DIR)/ $(INCLUDE_DIR)/,*.c *.h))
FORMAT_SYMBOLS_IGNORE	:= $(addprefix $(CONFIG_DIR)/,$(addsuffix .yaml,splat.us.weapon assets.hd assets.us))
FORMAT_SYMBOLS_FILES	:= $(filter-out $(FORMAT_SYMBOLS_IGNORE),$(wildcard $(CONFIG_DIR)/*.yaml))

# Toolchain
CROSS           := mipsel-linux-gnu-
LD              := $(CROSS)ld
OBJCOPY         := $(CROSS)objcopy
ALLEGREX 		:= $(BIN_DIR)/allegrex-as
WIBO            := $(BIN_DIR)/wibo
MWCCPSP         := $(BIN_DIR)/mwccpsp.exe
MWCCPSP_FLAGS   := -gccinc -Iinclude -D_internal_version_$(VERSION) -c -lang c -sdatathreshold 0 -char unsigned -fl divbyzerocheck
CYGNUS			:= $(BIN_DIR)/cygnus-2.7-96Q3-bin

# Symbols
BASE_SYMBOLS	:= $(CONFIG_DIR)/symbols.$(VERSION).txt

# Other tooling
BLACK			:= $(and $(PYTHON_BIN),$(PYTHON_BIN)/)black
SPLAT           := $(and $(PYTHON_BIN),$(PYTHON_BIN)/)splat split
SOTNSTR         := $(PYTHON) $(TOOLS_DIR)/sotn_str/sotn_str.py
ICONV           := iconv --from-code=UTF-8 --to-code=Shift-JIS
DIRT_PATCHER    := $(PYTHON) $(TOOLS_DIR)/dirt_patcher.py
SHASUM          := shasum
GFXSTAGE        := $(PYTHON) $(TOOLS_DIR)/gfxstage.py
PNG2S           := $(PYTHON) $(TOOLS_DIR)/png2s.py
CLANG			:= $(BIN_DIR)/clang-format
GOPATH          := $(HOME)/go
GO              := $(GOPATH)/bin/go
SOTNLINT		:= cargo run --release --manifest-path $(TOOLS_DIR)/lints/sotn-lint/Cargo.toml $(SRC_DIR)/
DUPS			:= cd $(TOOLS_DIR)/dups; cargo run --release -- --threshold .90 --output-file ../gh-duplicates/duplicates.txt
ASMDIFFER		:= $(TOOLS_DIR)/asm-differ/diff.py
M2CTX_APP       := $(TOOLS_DIR)/m2ctx.py
M2C_APP         := $(TOOLS_DIR)/m2c/m2c.py
PERMUTER_APP	:= $(TOOLS_DIR)/decomp-permuter
MASPSX_APP      := $(TOOLS_DIR)/maspsx/maspsx.py
MWCCGAP_APP     := $(TOOLS_DIR)/mwccgap/mwccgap.py
DOSEMU_APP		:= $(or $(shell which dosemu),/usr/bin/dosemu)
SATURN_SPLITTER_DIR := $(TOOLS_DIR)/saturn-splitter
SATURN_SPLITTER_APP := $(SATURN_SPLITTER_DIR)/rust-dis/target/release/rust-dis
SOTNDISK_DIR	:= $(TOOLS_DIR)/sotn-disk/
SOTNDISK        := $(GOPATH)/bin/sotn-disk
SOTNASSETS_DIR  := $(TOOLS_DIR)/sotn-assets/
SOTNASSETS      := $(GOPATH)/bin/sotn-assets
 
# Build functions
# sel doesn't follow the same pattern as other stages, so we ignore $(2) for it in list_o_files/list_src_files
2_IGNORE_SEL = $(if $(filter-out st/sel,$(1)),$(2))
new_list_o_files = $(subst //,/,$(foreach file,$(call list$(3)_src_files,$(1),$(2_IGNORE_SEL)),$(BUILD_DIR)/$(file).o))
define new_list_src_files
	$(foreach dir,$(ASM_DIR)/$(1)/ $(addprefix $(ASM_DIR)/$(1)/,$(ASM_SUBDIRS)),$(wildcard $(dir)/*.s))
	$(foreach dir,$(SRC_DIR)/$(1)/ $(addprefix $(SRC_DIR)/$(1)/,$(if $(2),,$(SRC_SUBDIRS))),$(wildcard $(dir)/*.c))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(if $(2),$(addprefix $(dir)/,$(ST_ASSETS)),$(dir)/*)))
endef
new_list_shared_src_files = $(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/*.c))

# leverages MWCC ability to compile data and text as separate sections to allow
# LD using --gc-sections and remove all the symbols that are unreferenced.
# symexport.*.txt is used to enforce a specific symbol and all its dependencies
# to be used. Refer to *.map to know which sections are being discarded by LD.
# Use nm to retrieve the symbol name out of a object file such as the mwo_header.
define new_link
	$(muffle)$(call echo,Linking $1,optional)
	$(muffle)$(LD) $(LD_FLAGS) -o $(2) \
		$(call if_version,pspeu,--gc-sections) \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(BUILD_DIR)/$(subst _fix,,$1).ld \
		$(call if_version,pspeu,-T $(CONFIG_DIR)/symexport.$(VERSION).$(1).txt) \
		-T $(CONFIG_DIR)/undefined_syms.$(if $(filter stmad,$(1)),beta,$(VERSION)).txt \
		-T $(CONFIG_DIR)/undefined_syms_auto$(if $(filter-out stmad stmad_fix,$(1)),.$(VERSION)).$(subst _fix,,$(1)).txt \
		$(if $(filter-out main,$(1)),-T $(CONFIG_DIR)/undefined_funcs_auto.$(if $(filter-out stmad stmad_fix,$(1)),$(VERSION).)$(subst _fix,,$(1)).txt)
endef
define get_merged_functions 
	$(shell $(PYTHON) -c 'import yaml;\
	import os;\
	yaml_file=open(os.path.join(os.getcwd(),"config/splat.$(VERSION).$(2)$(1).yaml"));\
	config = yaml.safe_load(yaml_file); yaml_file.close();\
	c_subsegments = [x for x in config["segments"][1]["subsegments"] if type(x) == list and x[1] == "c"];\
	merged_functions = [x[2].split("/")[1] for x in c_subsegments if str(x[2]).startswith("$(1)/")];\
	print(" ".join(merged_functions))')
endef
get_functions = $(addprefix $(BUILD_DIR)/src/$(2)/$(1)/,$(addsuffix .c.o,$(call get_merged_functions,$(1),$(2))))
# Use $(call get_targets,prefixed) when stages and bosses need to be prefixed
get_targets = $(GAME) $(if $1,$(addprefix st,$(STAGES)),$(STAGES)) $(if $1,$(addprefix bo,$(BOSSES)),$(BOSSES)) $(SERVANTS)
get_build_dirs = $(subst //,/,$(addsuffix /,$(addprefix $(BUILD_DIR)/,$1)))
# If stage then (or $2$1,st$1) else if boss then (or $3$1,bo$1), else $1
add_ovl_prefix = $(if $(filter $(call to_lower,$1),$(STAGES)),$(call to_lower,$(or $2,st)$1),$(if $(filter $(call to_lower,$1),$(BOSSES)),$(call to_lower,$(or $3,bo)$1),$(call to_lower,$1)))
get_ovl_from_path = $(word $(or $2,1),$(filter $(call get_targets),$(subst /, ,$1)))
### End new header ###

### Begin old header ###
WHICH_PYTHON	:= $(SYSTEM_PYTHON)

# Directories
DISK_DIR        := $(BUILD_DIR)/${VERSION}/disk

# Symbols
MAIN_TARGET     := $(BUILD_DIR)/main

ASMDIFFER_DIR   := $(TOOLS_DIR)/asm-differ
ASMDIFFER_APP   := $(ASMDIFFER_DIR)/diff.py
M2CTX_APP       := $(TOOLS_DIR)/m2ctx.py
M2CTX           := $(PYTHON) $(M2CTX_APP)
M2C_DIR         := $(TOOLS_DIR)/m2c
M2C_APP         := $(M2C_DIR)/m2c.py
M2C             := $(PYTHON) $(M2C_APP)
M2C_ARGS        := -P 4
SOTNSTR         := $(PYTHON) $(TOOLS_DIR)/sotn_str/sotn_str.py process
MASPSX_DIR      := $(TOOLS_DIR)/maspsx
MASPSX_APP      := $(MASPSX_DIR)/maspsx.py
MASPSX          := $(PYTHON) $(MASPSX_APP) --expand-div --aspsx-version=2.34
MASPSX_21       := $(PYTHON) $(MASPSX_APP) --expand-div --aspsx-version=2.21

DEPENDENCIES	= $(ASMDIFFER_APP) $(M2CTX_APP) $(M2C_APP) $(MASPSX_APP) $(GO) python-dependencies

SOTNDISK_SOURCES   := $(shell find tools/sotn-disk -name '*.go')
SOTNASSETS_SOURCES := $(shell find tools/sotn-assets -name '*.go')

# Functions
define list_src_files
	$(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/psxsdk,$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/handwritten,$(wildcard $(dir)/**.s))
	$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/**.c))
	$(foreach dir,$(SRC_DIR)/$(1)/psxsdk,$(wildcard $(dir)/**.c))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(dir)/**))
endef
define list_st_src_files
	$(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s))
	$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/**.c))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(dir)/D_801*.bin))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(dir)/*.gfxbin))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(dir)/*.palbin))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(dir)/cutscene_*.bin))
endef

define list_o_files
	$(foreach file,$(call list_src_files,$(1)),$(BUILD_DIR)/$(file).o)
endef

define list_st_o_files
	$(foreach file,$(call list_st_src_files,$(1)),$(BUILD_DIR)/$(file).o)
endef

define list_shared_src_files
	$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/*.c))
endef

define list_shared_o_files
	$(foreach file,$(call list_shared_src_files,$(1)),$(BUILD_DIR)/$(file).o)
endef

define link
	$(LD) $(LD_FLAGS) -o $(2) \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(BUILD_DIR)/$(1).ld \
		-T $(CONFIG_DIR)/undefined_syms.$(VERSION).txt \
		-T $(CONFIG_DIR)/undefined_syms_auto.$(VERSION).$(1).txt \
		-T $(CONFIG_DIR)/undefined_funcs_auto.$(VERSION).$(1).txt
endef

# Helper Functions
# These will eventually be merged with the equivalent PSX functions
define list_src_files_psp
	$(foreach dir,$(ASM_DIR)/$(1),$(wildcard $(dir)/**.s))
	$(foreach dir,$(ASM_DIR)/$(1)/data,$(wildcard $(dir)/**.s))
	$(foreach dir,$(SRC_DIR)/$(1),$(wildcard $(dir)/**.c))
	$(foreach dir,$(ASSETS_DIR)/$(1),$(wildcard $(dir)/**))
endef

define list_o_files_psp
	$(foreach file,$(call list_src_files_psp,$(1)),$(BUILD_DIR)/$(file).o)
endef

# leverages MWCC ability to compile data and text as separate sections to allow
# LD using --gc-sections and remove all the symbols that are unreferenced.
# symexport.*.txt is used to enforce a specific symbol and all its dependencies
# to be used. Refer to *.map to know which sections are being discarded by LD.
# Use nm to retrieve the symbol name out of a object file such as the mwo_header.
define link_with_deadstrip
	$(LD) $(LD_FLAGS) -o $(2) \
		--gc-sections \
		-Map $(BUILD_DIR)/$(1).map \
		-T $(BUILD_DIR)/$(1).ld \
		-T $(CONFIG_DIR)/symexport.$(VERSION).$(1).txt \
		-T $(CONFIG_DIR)/undefined_syms.$(VERSION).txt \
		-T $(CONFIG_DIR)/undefined_syms_auto.$(VERSION).$(1).txt \
		-T $(CONFIG_DIR)/undefined_funcs_auto.$(VERSION).$(1).txt
endef
### End old header ###

ifneq (,$(filter $(VERSION),us hd)) # Both us and hd versions use the PSX platform
include Makefile.psx.mk
else ifeq ($(VERSION),pspeu)
include Makefile.psp.mk
else ifeq ($(VERSION),saturn)
include Makefile.saturn.mk
endif

##@ Variables
##@
##@     VERSION              the game version to build (us, hd, pspeu, saturn, pc) (Default: us)
##@
##@ Primary Targets
##@

.PHONY: all
all: ##@ (Default) build and check
all: build check

.PHONY: extract 
extract: ##@ split game files into assets and assembly
extract: extract_$(VERSION)

.PHONY: build 
build: ##@ build game files
build: build_$(VERSION)

.PHONY: clean
clean: ##@ clean extracted files, assets, and build artifacts
clean: $(addprefix CLEAN_,$(CLEAN_FILES))
$(addprefix CLEAN_,$(CLEAN_FILES)): CLEAN_%:
	$(call echo,Cleaning $*) git clean -fdxq $*

##@
##@ Misc Targets
##@

# this help target will find targets which are followed by a comment beging with '#' '#' '@' and
# print them in a summary form. Any comments on a line by themselves with start with `#' '#' '@'
# will act as section dividers.
.PHONY: help
help: ##@ Print listing of key targets with their descriptions
	@printf "\nUsage: make [VERSION=version] <target> …\n"
	@grep -F -h "##@" $(MAKEFILE_LIST) | grep -F -v grep -F | sed -e 's/\\$$//' | awk 'BEGIN {FS = ":*[[:space:]]*##@[[:space:]]?"}; \
	{ \
		if($$2 == "") \
			printf ""; \
		else if($$0 ~ /^#/) \
			printf "\n%s\n", $$2; \
		else if($$1 == "") \
			printf "     %-20s%s\n", "", $$2; \
		else { \
            system("tput setaf 4; printf \"\n    %-20s \" " $$1 "; tput sgr0"); \
            printf "%s\n", $$2; \
        }; \
	}'

.PHONY: format
format: ##@ Format source code, clean symbols, other linting
format: format-src format-tools format-symbols format-license

.PHONY: format-src
format-src: $(addprefix FORMAT_,$(FORMAT_SRC_FILES))
# Redirecting sotn-lint stdout because it's currently just a bunch of spam
	$(SOTNLINT) 1>/dev/null; rm $@.run
format-src.run:
	$(call echo,Running clang to format src/* and include/* (this may take some time)) touch $@
$(addprefix FORMAT_,$(FORMAT_SRC_FILES)): FORMAT_%: $(CLANG) format-src.run
	$(CLANG) -i $*

.PHONY: format-tools
format-tools: $(addprefix FORMAT_,$(PY_TOOLS_DIRS))
$(addprefix FORMAT_,$(PY_TOOLS_DIRS)): FORMAT_%: | $(VENV_DIR)/bin
	$(call echo,Formatting $**.py) $(BLACK) $**.py
format-symbols: $(addprefix format-symbols_,us hd pspeu saturn) $(addprefix FORMAT_,$(FORMAT_SYMBOLS_FILES))
	rm $@.run
format-symbols.run:
	$(call echo,Removing orphan symbols using splat configs) touch $@
$(addprefix format-symbols_,us hd pspeu saturn): format-symbols_%: | $(VENV_DIR)/bin
	$(call echo,Sorting $* symbols) VERSION=$* $(PYTHON) $(TOOLS_DIR)/symbols.py sort
$(addprefix FORMAT_,$(FORMAT_SYMBOLS_FILES)): FORMAT_%: format-symbols.run | $(VENV_DIR)/bin
	$(PYTHON) $(TOOLS_DIR)/symbols.py remove-orphans $*
format-license:
	$(call echo,Checking for license line in code files)
	find src/ -type f -name "*.c" -or -name "*.h" | grep -vE 'PsyCross|mednafen|psxsdk|3rd|saturn/lib' | $(PYTHON) $(TOOLS_DIR)/lint-license.py - AGPL-3.0-or-later
	$(foreach item,$(addprefix include/,game.h entity.h items.h lba.h memcard.h),$(PYTHON) $(TOOLS_DIR)/lint-license.py $(item) AGPL-3.0-or-later;)


# fast-format
.PHONY: ff
ff: MAKEFLAGS += --jobs
ff:
	$(MAKE) format

.PHONY: patch
patch:
	$(DIRT_PATCHER) config/dirt.$(VERSION).json

.PHONY: check
check: ##@ compare built files to original game files
check: config/check.$(VERSION).sha patch $(CHECK_FILES)
	@$(SHASUM) --check $< | awk 'BEGIN{ FS=": " }; { \
        printf "%s\t[ ", $$1; \
        if ($$2 == "OK") \
            color = 28;   \
        else \
            color = 196;   \
        system("tput setaf " color "; printf " $$2 "; tput sgr0"); \
        printf " ]\n"; \
    }' | column --separator $$'\t' --table

.PHONY: expected
expected: check
	mkdir -p expected/build
	rm -rf expected/build/$(VERSION)
	cp -r build/$(VERSION) expected/build/

# Force to extract all the assembly code regardless if a function is already decompiled
force_extract:
	mv src src_tmp
	find $(BUILD_DIR) -type f -name "*.ld" -delete
	make extract -j
	rm -rf src/
	mv src_tmp src

force_symbols = $(patsubst $(BUILD_DIR)/%.elf,%,$(wildcard $(BUILD_DIR)/*.elf))
force-symbols: $(addprefix FORCE_,$(force_symbols))
# This is currently intentionally hard coded to us because the us files are used for functions in other versions
$(addprefix FORCE_,$(force_symbols)): FORCE_%: | $(VENV_DIR)/bin
	$(call echo,Extracting symbols for $*) $(PYTHON) $(TOOLS_DIR)/symbols.py elf $(BUILD_DIR)/$*.elf > $(CONFIG_DIR)/symbols$(if $(filter-out stmad,$*),.us).$*.txt

context: ##@ create a context for decomp.me. Set the SOURCE variable prior to calling this target
	VERSION=$(VERSION) $(M2CTX) $(SOURCE)
	@echo ctx.c has been updated.

.PHONY: extract_%
extract_disk: ##@ Extract game files from a disc image.
extract_disk: extract_disk_$(VERSION)
disk: disk-prepare
	$(call echo,Creating disk image) $(SOTNDISK) make $(BUILD_DIR:/$(VERSION)=)/sotn.$(VERSION).cue $(BUILD_DISK_DIR) $(CONFIG_DIR)/disk.$(VERSION).lba
ovl_to_bin  = $(1)/$(1).BIN $(1)/F_$(1).BIN
disk_prepare := DRA.BIN BIN/RIC.BIN ST/SEL/SEL.BIN
disk_prepare += $(addprefix ST/,$(foreach target,$(filter-out sel,$(STAGES)),$(call ovl_to_bin,$(call to_upper,$(target)))))
disk_prepare += $(addprefix BOSS/,$(foreach target,$(BOSSES),$(call ovl_to_bin,$(call to_upper,$(target)))))
disk_prepare += $(addprefix SERVANT/,$(call to_upper,$(addsuffix .BIN,$(SERVANTS))))
disk-prepare: build $(SOTNDISK)
	$(call echo,Copying extracted disk files) mkdir -p $(BUILD_DISK_DIR); cp -r $(EXTRACTED_DISK_DIR)/* $(BUILD_DISK_DIR)
	$(call echo,Copying main.exe as SLUS_000.67) cp $(BUILD_DIR)/main.exe $(BUILD_DISK_DIR)/SLUS_000.67
	$(foreach item,$(disk_prepare),$(call echo,Copying $(item)) cp $(BUILD_DIR)/$(notdir $(item)) $(BUILD_DISK_DIR)/$(item);)
disk-debug: disk-prepare
	cd $(TOOLS_DIR)/sotn-debugmodule && $(MAKE)
	cp $(BUILD_DIR:$(VERSION)=)/sotn-debugmodule.bin $(BUILD_DISK_DIR)/SERVANT/TT_000.BIN
	$(SOTNDISK) make $(BUILD_DIR:$(VERSION)=)/sotn.$(VERSION).cue $(BUILD_DISK_DIR) $(CONFIG_DIR)/disk.$(VERSION).lba

# put this here as both PSX HD and PSP use it
extract_disk_psp%:
	mkdir -p disks/psp$*
	7z x -y disks/sotn.psp$*.iso -odisks/psp$*/
test:
	$(PYTHON) tools/symbols_test.py

function-finder:
	# TODO: make sure graphviz is installed
	$(MAKE) force_symbols
	$(MAKE) force_extract
	$(PYTHON) tools/analyze_calls.py
	git clean -fdx asm/
	git checkout config/
	rm -f build/us/main.ld
	rm -rf build/us/weapon.ld
	$(MAKE) -j extract
	$(PYTHON) tools/function_finder/function_finder_psx.py --use-call-trees > gh-duplicates/functions.md
	rm -rf gh-duplicates/function_calls || true
	mv function_calls gh-duplicates/
	mv function_graphs.md gh-duplicates/

duplicates-report:
	$(MAKE) force_symbols
	$(MAKE) force_extract
	cd tools/dups; \
	    cargo run --release -- \
            --threshold .90 \
            --output-file ../../gh-duplicates/duplicates.txt

.PHONY: python-dependencies
.PHONY: update-dependencies
update-dependencies: ##@ update tools and internal dependencies
# Targets that specify and/or install dependencies
git-submodules: $(ASMDIFFER) $(dir $(M2C_APP)) $(PERMUTER_APP) $(MASPSX_APP) $(MWCCGAP_APP) $(SATURN_SPLITTER_DIR)
update-dependencies: $(ASMDIFFER) $(M2CTX_APP) $(M2C_APP) requirements-python dependencies_$(VERSION) $(SOTNDISK) $(SOTNASSETS)
	git clean -fdq $(BIN_DIR)/
update-dependencies-all: update-dependencies $(addprefix dependencies_,us pspeu hd saturn)

dependencies_us dependencies_hd: $(MASPSX_APP) 
$(MASPSX_APP): | $(VENV_DIR)
	git submodule update --init $(dir $(MASPSX_APP))

dependencies_pspeu: $(ALLEGREX) $(MWCCGAP_APP) $(MWCCPSP)
$(MWCCGAP_APP): | $(VENV_DIR)
	git submodule update --init $(dir $(MWCCGAP_APP))
$(WIBO):
	$(call wget,https://github.com/decompals/wibo/releases/download/0.6.13/wibo,$@,wibo)
	$(muffle)sha256sum --check $(WIBO).sha256; chmod +x $(WIBO); rm wget-wibo.log
$(MWCCPSP): $(WIBO) $(BIN_DIR)/mwccpsp_219

dependencies_saturn: $(SATURN_SPLITTER_APP) $(DOSEMU_APP) $(CYGNUS)
$(SATURN_SPLITTER_DIR):
	git submodule update --init $(SATURN_SPLITTER_DIR)
$(SATURN_SPLITTER_APP): $(SATURN_SPLITTER_DIR)
	cd $(SATURN_SPLITTER_DIR)/rust-dis && cargo build --release
	cd $(SATURN_SPLITTER_DIR)/adpcm-extract && cargo build --release
$(DOSEMU_APP):
	cd $(TOOLS_DIR); git clone https://github.com/sozud/dosemu-deb.git
	sudo dpkg -i $(TOOLS_DIR)/dosemu-deb/*.deb
$(GO):
	$(call wget,https://go.dev/dl/go1.22.4.linux-amd64.tar.gz,go1.22.4.linux-amd64.tar.gz,go)
	tar -C $(HOME) -xzf go1.22.4.linux-amd64.tar.gz; rm go1.22.4.linux-amd64.tar.gz
	$(muffle)rm wget-go.log
$(ASMDIFFER): | $(VENV_DIR)
	git submodule update --init $(dir $(ASMDIFFER))
$(dir $(M2C_APP)):
	git submodule update --init $(dir $(M2C_APP))
$(M2C_APP): $(dir $(M2C_APP)) | $(VENV_DIR)
	$(PIP) install --upgrade pycparser
$(PERMUTER_APP): | $(VENV_DIR)
	git submodule update --init $(dir $(PERMUTER_APP))
$(M2CTX_APP): | $(VENV_DIR)
	$(call wget,https://raw.githubusercontent.com/ethteck/m2ctx/main/m2ctx.py,$@,m2ctx_app)
	$(muffle)rm wget-m2ctx_app.log
$(SOTNDISK): $(GO) $(wildcard $(SOTNDISK_DIR)/*.go)
	cd $(SOTNDISK_DIR); $(GO) install
$(SOTNASSETS): $(GO) $(wildcard $(SOTNASSETS_DIR)/*.go)
	cd $(SOTNASSETS_DIR); $(GO) install
# Since venv is newly created, it can be reasonably assumed that the python requirements need to be installed
$(VENV_DIR):
	$(call echo,Creating python virtual environment) $(SYSTEM_PYTHON) -m venv $(VENV_DIR)
	$(PIP) install -r $(TOOLS_DIR)/requirements-python.txt
# Used when an explicit make restart is needed after venv is created
$(VENV_DIR)/bin:
	$(call echo,Creating python virtual environment) $(SYSTEM_PYTHON) -m venv $(VENV_DIR)
	$(PIP) install -r $(TOOLS_DIR)/requirements-python.txt && echo "Build environment has changed due to venv install, please restart Make" && exit 1
python-dependencies: requirements-python
requirements-python: | $(VENV_DIR)
	$(PIP) install -r $(TOOLS_DIR)/requirements-python.txt
$(BIN_DIR)/%.tar.gz: $(BIN_DIR)/%.tar.gz.sha256
	$(call wget,https://github.com/Xeeynamo/sotn-decomp/releases/download/cc1-psx-26/$*.tar.gz,$@,$*) 
$(BIN_DIR)/%: $(BIN_DIR)/%.tar.gz
	$(muffle)sha256sum --check $<.sha256
	$(muffle)cd $(BIN_DIR) && tar -xzf $(notdir $<); rm $(notdir $<)
	$(muffle)touch $@; rm wget-$*.log

graphviz: | $(VENV_DIR)
	$(PIP) install --upgrade graphviz
	sudo apt install graphviz

# Handles assets
$(BUILD_DIR)/$(ASSETS_DIR)/%.spritesheet.json.o: $(ASSETS_DIR)/%.spritesheet.json
	$(PYTHON) ./tools/splat_ext/spritesheet.py encode $< $(BUILD_DIR)/$(ASSETS_DIR)/$*.s
	$(AS) $(AS_FLAGS) -o $(BUILD_DIR)/$(ASSETS_DIR)/$*.o $(BUILD_DIR)/$(ASSETS_DIR)/$*.s
$(BUILD_DIR)/$(ASSETS_DIR)/dra/%.json.o: $(ASSETS_DIR)/dra/%.json
	$(PYTHON) ./tools/splat_ext/assets.py $< $(BUILD_DIR)/$(ASSETS_DIR)/dra/$*.s
	$(AS) $(AS_FLAGS) -o $(BUILD_DIR)/$(ASSETS_DIR)/dra/$*.o $(BUILD_DIR)/$(ASSETS_DIR)/dra/$*.s
$(BUILD_DIR)/$(ASSETS_DIR)/ric/%.json.o: $(ASSETS_DIR)/ric/%.json
	$(PYTHON) ./tools/splat_ext/assets.py $< $(BUILD_DIR)/$(ASSETS_DIR)/ric/$*.s
	$(AS) $(AS_FLAGS) -o $(BUILD_DIR)/$(ASSETS_DIR)/ric/$*.o $(BUILD_DIR)/$(ASSETS_DIR)/ric/$*.s
$(BUILD_DIR)/$(ASSETS_DIR)/%.bin.o: $(ASSETS_DIR)/%.bin
	mkdir -p $(dir $@)
	$(LD) -r -b binary -o $(BUILD_DIR)/$(ASSETS_DIR)/$*.o $<
$(BUILD_DIR)/$(ASSETS_DIR)/%.gfxbin.o: $(ASSETS_DIR)/%.gfxbin
	mkdir -p $(dir $@)
	$(LD) -r -b binary -o $(BUILD_DIR)/$(ASSETS_DIR)/$*.o $<
$(BUILD_DIR)/$(ASSETS_DIR)/%.palbin.o: $(ASSETS_DIR)/%.palbin
	mkdir -p $(dir $@)
	$(LD) -r -b binary -o $(BUILD_DIR)/$(ASSETS_DIR)/$*.o $<
$(BUILD_DIR)/$(ASSETS_DIR)/%.dec.o: $(ASSETS_DIR)/%.dec
# for now '.dec' files are ignored
	touch $@
$(BUILD_DIR)/$(ASSETS_DIR)/%.png.o: $(ASSETS_DIR)/%.png
	touch $@

##@
##@ Disc Dumping Targets
##@

.PHONY: dump_disk%
dump_disk: ##@ dump a physical game disk
dump_disk: dump_disk_$(VERSION)
dump_disk_eu: dump_disk_cd
dump_disk_hk: dump_disk_cd
dump_disk_jp10: dump_disk_cd
dump_disk_jp11: dump_disk_cd
dump_disk_jp: dump_disk_cd
dump_disk_saturn: dump_disk_cd
dump_disk_us: dump_disk_cd
dump_disk_usproto: dump_disk_cd
dump_disk_psp%: dump_disk_not_supported
dump_disk_xbla%: dump_disk_not_supported
dump_disk_cd: disks/sotn.$(VERSION).cue
dump_disk_not_supported:
	@echo "Automated dumping of $(VERSION) is not supported" >&2 && exit 1

disks/sotn.%.bin disks/sotn.%.cue:
	@( which -s cdrdao && which -s toc2cue ) || (echo "cdrdao(1) and toc2cue(1) must be installed" && exit 1 )
	cd disks && \
        DEVICE="$(shell cdrdao scanbus 2>&1 | grep -vi cdrdao | head -n1 | sed 's/ : [^:]*$$//g')" && \
        cdrdao read-cd \
            --read-raw \
            --datafile sotn.$*.bin \
            --device "$$DEVICE" \
            --driver generic-mmc-raw \
            sotn.$*.toc && \
        toc2cue sotn.$*.toc sotn.$*.cue && \
        rm sotn.$*.toc

# .PHONY and .SILENT group
# Putting this in a separate section because if it is included with the targets as I'd prefer, it becomes very cluttered and harder to read.
# These lists can be added to at any point since adding the lists to the actual .PHONY and .SILENT targets is the final action and order does not matter.
# I'd prefer assigning to .PHONY and .SILENT directly without using the list, but the list allows us to have a target that displays it to the user for debugging.
# They are grouped in the general order you will find the targets in the file.
PHONY: # Since .PHONY reads % as a literal %, we need this target as a prereq to treat pattern targets as .PHONY
PHONY_TARGETS += all all-clean build-and-check clean $(addprefix CLEAN_,$(CLEAN_FILES)) extract build patch check expected
PHONY_TARGETS += dump-disk $(addprefix dump-disk_,eu hk jp10 jp11 saturn us usproto) extract-disk disk disk-prepare disk-debug
PHONY_TARGETS += format-src format-src.run $(addprefix FORMAT_,$(FORMAT_SRC_FILES)) format-tools $(addprefix FORMAT_,$(PY_TOOLS_DIRS))
PHONY_TARGETS += format-symbols format-symbols.run $(addprefix format-symbols_,us hd pspeu saturn) $(addprefix FORMAT_,$(FORMAT_SYMBOLS_FILES)) format-license
PHONY_TARGETS += force-symbols $(addprefix FORCE_,$(FORCE_SYMBOLS)) force-extract context mad_fix function-finder duplicates-report
PHONY_TARGETS += git-submodules update-dependencies update-dependencies-all $(addprefix dependencies_,us pspeu hd saturn) requirements-python graphviz
PHONY_TARGETS += help get-debug get-phony get-silent
MUFFLED_TARGETS += $(PHONY_TARGETS) $(MASPSX_APP) $(MWCCGAP_APP) $(MWCCPSP) $(SATURN_SPLITTER_DIR) $(SATURN_SPLITTER_APP) $(EXTRACTED_DISK_DIR)
MUFFLED_TARGETS += $(DOSEMU_APP) $(ASMDIFFER) $(dir $(M2C_APP)) $(M2C_APP) $(PERMUTER_APP) $(SOTNDISK) $(SOTNASSETS) $(VENV_DIR) $(VENV_DIR)/bin
.PHONY: $(PHONY_TARGETS)
# Specifying .SILENT in this manner allows us to set the DEBUG environment variable and display everything for debugging
#$(DEBUG).SILENT: $(MUFFLED_TARGETS)
# These are walls of text, so they're redirected to files instead of stdout for debugging
get-debug: get-phony get-silent
get-phony:
	echo ".PHONY:" > make.phony.targets
	$(foreach target,$(PHONY_TARGETS),echo $(target) >> make.phony.targets;)
get-silent:
	echo ".SILENT:" > make.silent.targets
	$(foreach target,$(MUFFLED_TARGETS),echo $(target) >> make.silent.targets;)
