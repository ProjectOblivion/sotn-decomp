# Unknown category: OPEN ENDING SUB MOVIE STAFF LOGO TITLE
# Game OVL options: ZERO ALUCARD GAME RICHTER RICHTER2 WEAPON0 WEAPON1
# Both stage and reverse stage fall under "STAGES" variable, they are split only for readability.
# Stage OVL options: LIBRARY STAGE_00 STAGE_01 STAGE_02 STAGE_03 STAGE_04 STAGE_05 STAGE_06 STAGE_07 STAGE_08 STAGE_09 STAGE_10 STAGE_11 STAGE_12 STAGE_13 STAGE_14 STAGE_15 STAGE_16 STAGE_0X STAGE_EX STAGE_MA WARP
# Reverse stage OVL options: RSTAGE01 RSTAGE02 RSTAGE03 RSTAGE04 RSTAGE05 RSTAGE06 RSTAGE07 RSTAGE08 RSTAGE09 RSTAGE10 RSTAGE12 RSTAGE13 RSTAGE14 RSTAGE15 RSTAGE16 RWARP
# Boss OVL options: BOSS_02 BOSS_04 BOSS_06 BOSS_07 BOSS_08 BOSS_09 BOSS_10 BOSS_11 BOSS_12 BOSS_13 MARIA
# Reverse boss OVL options: BOSS_R02 BOSS_R04 BOSS_R06 BOSS_R08 BOSS_R09 BOSS_R10 BOSS_R11 BOSS_R12 BOSS_R13 BOSS_R14
# Servant OVL options: T_BAT T_DEVIL T_DEVIL2 T_FAIRY T_FAIRY2 T_GHOST T_SWORD
GAME		:= zero game alucard
STAGES		:= stage_02 warp
STAGES		+= 
BOSSES 		:= 
SERVANTS	:= t_bat

LIB_OBJECTS 		:= lib/gfs.o lib/spr.o lib/dma.o lib/scl.o lib/csh.o lib/per.o lib/cdc.o lib/mth.o lib/bup.o lib/sys.o
ASSETS_DIR 			:= $(ASSETS_DIR)/saturn
DOSEMU				:= $(DOSEMU_APP) -quiet -dumb -f ./dosemurc -K . -E
OBJDUMP_FLAGS		:= -z -m sh2 -b binary -D
LD_FLAGS			:= $(if $(QUIET),,-verbose )--no-check-sections -nostdlib
SATURN_SPLITTER 	:= $(SATURN_SPLITTER_APP)
PCM_FILES 			:= $(wildcard $(EXTRACTED_DISK_DIR)/SD/*.PCM)
WAV_FILES 			:= $(PCM_FILES:$(EXTRACTED_DISK_DIR)/SD/%.PCM=$(ASSETS_DIR)/SD/%.wav)

# Step 1/2 of extract
$(BUILD_DIR)/%.ld: $(CONFIG_DIR)/split.$(VERSION).%.yaml $(SATURN_SPLITTER_APP) | $(EXTRACTED_DISK_DIR)
	$(muffle)$(SATURN_SPLITTER) $(CONFIG_DIR)/split.$(VERSION).$*.yaml

# Step 2/2 of extract
extract_saturn: $(addprefix $(BUILD_DIR)/,$(addsuffix .ld,$(call to_lower,$(call get_targets))))

# Step 1/4 of build
$(BUILD_DIR)/%.o: $(SRC_DIR)/saturn/%.c $(CC1_SATURN)
	$(call echo,Compiling $(subst $(SRC_DIR),,$<))
	$(muffle)cd $(BUILD_DIR) && $(DOSEMU) "GCC.EXE -c -I./ $(if $(findstring lib,$*),-O0,-O2) -m2 -fsigned-char $*.c -o $*.o"

$(BUILD_DIR)/%.elf: $(BUILD_DIR)/%.o $$(if $$(filter zero,%),$(addprefix $(BUILD_DIR)/,$(LIB_OBJECTS))) $(BASE_SYMBOLS) $(SYMBOLS_DIR)/symbols.$(VERSION).%.txt
	$(call link,$*,$@,$(BUILD_DIR)/$*.o $(if $(filter zero,$*),$(addprefix $(BUILD_DIR)/,$(LIB_OBJECTS))))

# Step 2/4 of build
get_elf = $(BUILD_DIR)/$(if $(filter 0,$1),zero,$(call to_lower,$1)).elf
$(addprefix $(BUILD_DIR)/,%.PRG %.BIN): $$(call get_elf,%)
	$(call echo,Building $(notdir $@))
	$(muffle)$(OBJCOPY) $< -O binary $@

# Step 3/4 of build
zero: $(BUILD_DIR)/0.BIN
	$(call echo,Finished building $@)
$(filter-out zero,$(call get_targets)): %: $(BUILD_DIR)/$$(call to_upper,%).PRG
	$(call echo,Finished building $@)

# Step 4/4 of build
build_saturn: $(call get_targets)

# Utility targets
$(ASSETS_DIR)/SD/%.wav: $(EXTRACTED_DISK_DIR)/SD/%.PCM $(ADPCM_EXTRACT_APP)
	$(call echo,Extracting $@)
	$(muffle)mkdir -p $(ASSETS_DIR)/SD; $(ADPCM_EXTRACT_APP) $< $@
extract_saturn_pcm: $(WAV_FILES)

# Fixes build -j breaking due to dosemu
.NOTPARALLEL: build_saturn
PHONY_TARGETS += build_saturn extract_saturn extract_saturn_pcm diff_saturn
MUFFLED_TARGETS += $(EXTRACT_SATURN_FILES) $(BUILD_DIR)/0.BIN $(BUILD_DIR)/zero.elf $(CC1_SATURN)
