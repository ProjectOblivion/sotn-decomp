# Game OVL options: main dra ric weapon
# Both stage and reverse stage fall under "STAGES" variable, they are split only for readability.
# Stage OVL options: are cat cen chi dai dre lib mad no0 no1 no2 no3 no4 np3 nz0 nz1 sel st0 top wrp
# Reverse stage OVL options: rare rcat rcen rchi rdai rlib rno0 rno1 rno2 rno3 rno4 rnz0 rnz1 rtop rwrp
# Boss OVL options: bo0 bo1 bo2 bo3 bo4 bo5 bo6 bo7 mar rbo0 rbo1 rbo2 rbo3 rbo4 rbo5 rbo6 rbo7 rbo8
# Servant OVL options: tt_000 tt_001 tt_002 tt_003 tt_004 tt_005 tt_006

GAME		:= dra
STAGES		:= lib no4 st0 wrp
STAGES		+= 
BOSSES		:= 
SERVANTS	:= tt_000

# Flags
AS_FLAGS        += -EL -I include/ -G0 -march=allegrex -mabi=eabi
MWCCPSP_FLAGS   := -gccinc -Iinclude -D_internal_version_$(VERSION) -c -lang c -sdatathreshold 0 -char unsigned -fl divbyzerocheck
MWLDPSP_FLAGS   := -partial -nostdlib -msgstyle gcc -sym full,elf -g

# Tools
ALLEGREX_AS     := $(BIN_DIR)/allegrex-as
AS              := $(ALLEGREX_AS)
WIBO            := $(BIN_DIR)/wibo
MWCCPSP         := $(BIN_DIR)/mwccpsp.exe
CCPSP           := MWCIncludes=$(BIN_DIR) $(WIBO) $(MWCCPSP)

MWASPSP         := $(WIBO) $(BIN_DIR)/asm_psp_elf.exe -gnu
MWLDPSP         := $(WIBO) $(BIN_DIR)/mwldpsp.exe

MWCCGAP_DIR     := $(TOOLS_DIR)/mwccgap
MWCCGAP_APP     := $(MWCCGAP_DIR)/mwccgap.py
MWCCGAP         := $(PYTHON) $(MWCCGAP_APP)

DEPENDENCIES	+= $(ALLEGREX_AS)

# Most of PSP is compiled with -O0, except part of DRA. This block selects the proper flag.
OPT_HIGH = -O4,p #need this because otherwise the comma breaks the if-statement
# Allow override. Any file in this list will get O4.
OPT_HI_OVERRIDES = $(addsuffix .c.o,33F0 A710 C0B0 EC60 186E8 61F30 624DC 628AC 63C90 64EE0)
OPTIMIZATION = $(if $(filter $(notdir $@),$(OPT_HI_OVERRIDES)),$(OPT_HIGH),-Op)

build_pspeu: $(call get_targets)
extract_pspeu: $(addprefix $(BUILD_DIR)/,$(addsuffix .ld,$(call get_targets,st,bo)))
$(call get_targets): %: $(BUILD_DIR)/%.bin

$(WIBO):
	wget -O $@ https://github.com/decompals/wibo/releases/download/0.6.13/wibo
	sha256sum --check $(WIBO).sha256
	chmod +x $(WIBO)
$(MWCCPSP): $(WIBO) $(BIN_DIR)/mwccpsp_219

$(MWCCGAP_APP):
	git submodule update --init $(MWCCGAP_DIR)

$(addprefix $(BUILD_DIR)/%,.BIN .bin _raw.bin .exe): $(BUILD_DIR)/$$(call get_filename,%,st,bo).elf
	$(OBJCOPY) -O binary $< $@

$(BUILD_DIR)/%.ld: $(CONFIG_DIR)/splat.$(VERSION).%.yaml $(BASE_SYMBOLS) $(CONFIG_DIR)/symbols.$(VERSION).%.txt
	$(SPLAT) $<

$(BUILD_DIR)/%.s.o: %.s
	@mkdir -p $(dir $@)
	$(AS) $(AS_FLAGS) -o $@ $<


$(BUILD_DIR)/%.c.o: %.c $(MWCCPSP) $(MWCCGAP_APP)
	@mkdir -p $(dir $@)
	$(MWCCGAP) $< $@ --mwcc-path $(MWCCPSP) --use-wibo --wibo-path $(WIBO) --as-path $(AS) --asm-dir-prefix asm/pspeu --macro-inc-path include/macro.inc $(MWCCPSP_FLAGS) $(OPTIMIZATION)

$(BUILD_DIR)/assets/%/mwo_header.bin.o: assets/%/mwo_header.bin
	@mkdir -p $(dir $@)
	$(LD) -r -b binary -o $@ $<

define get_merged_functions 
$(shell $(PYTHON) -c 'import yaml;\
import os;\
yaml_file=open(os.path.join(os.getcwd(),"config/splat.$(VERSION).$(2)$(1).yaml"));\
config = yaml.safe_load(yaml_file);\
yaml_file.close();\
print(" ".join([x[2].split("/")[1] for x in config["segments"][1]["subsegments"] if type(x) == list and x[1] == "c" and x[2].startswith("$(1)/")]))')
endef

get_functions = $(addprefix $(BUILD_DIR)/src/$(2)/$(1)/,$(addsuffix .c.o,$(call get_merged_functions,$(1),$(2))))

$(addprefix $(BUILD_DIR)/,$(addsuffix .elf,$(filter-out main,$(GAME)))): $(BUILD_DIR)/%.elf: $(BUILD_DIR)/%.ld $$(call get_functions,%) $$(call list_o_files,%_psp)
	$(call link,$*,$@)
$(BUILD_DIR)/st%.elf: $(BUILD_DIR)/st%.ld $$(call get_functions,%,st) $$(call list_o_files,st/%_psp) $(BUILD_DIR)/assets/st/%/mwo_header.bin.o
	$(call link,st$*,$@)
$(BUILD_DIR)/tt_%.elf: $(BUILD_DIR)/tt_%.ld $$(call list_o_files,servant/tt_$$*) $(BUILD_DIR)/assets/servant/tt_%/mwo_header.bin.o
	$(call link,tt_$*,$@)
