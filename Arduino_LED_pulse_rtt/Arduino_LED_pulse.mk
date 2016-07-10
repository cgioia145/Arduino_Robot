# Copyright 2013 The MathWorks, Inc.
# Autogenerated on: 17-Jun-2016 12:02:30
# Model: ARDUINO_LED_PULSE
# MyTemplate
# File name: Arduino_LED_pulse.mk
# Template: gmake 
# Template Version: 1.0 
# Tool Chain Configuration: Arduinoleonardo
# Tool Chain Configuration Version: 2.0

ifeq (windows,$(HOST_PLATFORM))
SHELL=%SystemRoot%/System32/cmd.exe 
endif

THIS_MAKEFILE := $(lastword $(MAKEFILE_LIST))
EMPTY :=
SPACE := $(EMPTY) $(EMPTY)

MODEL_NAME := Arduino_LED_pulse
HOST_PLATFORM := windows
BUILD_CFG := MW
TARGET_EXT := .elf
TARGET_HEX_EXT := .hex
OBJ_EXT := .o
TOOL_CHAIN_CFG := Arduinoleonardo
FORMAT_PATH = $(if $(filter \\\\%,$(1)),"$(1)",$(subst $(SPACE),\$(SPACE),$(subst \,/,$(1))))

MATLAB_ROOT_RELATIVE := ..\..\..\..\..\..\Program Files\MATLAB\MATLAB Production Server\R2015a\#MATLAB_ROOT_RELATIVE_END
MATLAB_ROOT_ABSOLUTE := C:\Program Files\MATLAB\MATLAB Production Server\R2015a\#MATLAB_ROOT_ABSOLUTE_END
SOURCE_PATH := $(call FORMAT_PATH,.\)

ifneq (.a,$(strip $(TARGET_EXT)))
OUTPUT_PATH := $(call FORMAT_PATH,$(SOURCE_PATH)$(BUILD_CFG)/)
else
OUTPUT_PATH := $(call FORMAT_PATH,$(SOURCE_PATH)/)
endif

DERIVED_PATH := $(call FORMAT_PATH,$(SOURCE_PATH))
TARGET_NAME_PREFIX := 
TARGET_NAME_POSTFIX := 
TARGET_FILE_NO_EXT := $(TARGET_NAME_PREFIX)$(MODEL_NAME)$(TARGET_NAME_POSTFIX)
TARGET_FILE := $(TARGET_FILE_NO_EXT)$(TARGET_EXT)

TARGET := $(OUTPUT_PATH)$(TARGET_FILE)
TARGET_HEX := $(TARGET_FILE_NO_EXT)$(TARGET_HEX_EXT)

#Code Generation Files

ifneq (.a,$(strip $(TARGET_EXT)))
SOURCE_FILES := $(call FORMAT_PATH,.\CDC.cpp) $(call FORMAT_PATH,.\HID.cpp) $(call FORMAT_PATH,.\HardwareSerial.cpp) $(call FORMAT_PATH,.\IPAddress.cpp) $(call FORMAT_PATH,.\Print.cpp) $(call FORMAT_PATH,.\Stream.cpp) $(call FORMAT_PATH,.\Tone.cpp) $(call FORMAT_PATH,.\USBCore.cpp) $(call FORMAT_PATH,.\WInterrupts.c) $(call FORMAT_PATH,.\WMath.cpp) $(call FORMAT_PATH,.\WString.cpp) $(call FORMAT_PATH,.\new.cpp) $(call FORMAT_PATH,.\wiring.c) $(call FORMAT_PATH,.\wiring_analog.c) $(call FORMAT_PATH,.\wiring_digital.c) $(call FORMAT_PATH,.\wiring_pulse.c) $(call FORMAT_PATH,.\wiring_shift.c) $(call FORMAT_PATH,.\io_wrappers.cpp) $(call FORMAT_PATH,.\Arduino_LED_pulse.c) $(call FORMAT_PATH,.\Arduino_LED_pulse_data.c) $(call FORMAT_PATH,.\ert_main.c)
else
SOURCE_FILES := $(call FORMAT_PATH,.\CDC.cpp) $(call FORMAT_PATH,.\HID.cpp) $(call FORMAT_PATH,.\HardwareSerial.cpp) $(call FORMAT_PATH,.\IPAddress.cpp) $(call FORMAT_PATH,.\Print.cpp) $(call FORMAT_PATH,.\Stream.cpp) $(call FORMAT_PATH,.\Tone.cpp) $(call FORMAT_PATH,.\USBCore.cpp) $(call FORMAT_PATH,.\WInterrupts.c) $(call FORMAT_PATH,.\WMath.cpp) $(call FORMAT_PATH,.\WString.cpp) $(call FORMAT_PATH,.\new.cpp) $(call FORMAT_PATH,.\wiring.c) $(call FORMAT_PATH,.\wiring_analog.c) $(call FORMAT_PATH,.\wiring_digital.c) $(call FORMAT_PATH,.\wiring_pulse.c) $(call FORMAT_PATH,.\wiring_shift.c) $(call FORMAT_PATH,.\io_wrappers.cpp) $(call FORMAT_PATH,.\Arduino_LED_pulse.c) $(call FORMAT_PATH,.\Arduino_LED_pulse_data.c) $(call FORMAT_PATH,.\ert_main.c)
endif

HEADER_FILES := $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\HardwareSerial.h) $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\IPAddress.h) $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\Print.h) $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\Stream.h) $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\USBCore.h) $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\WString.h) $(call FORMAT_PATH,..\..\..\..\..\..\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\arduino\cores\arduino\new.h) $(call FORMAT_PATH,.\Arduino_LED_pulse.h)

LIBRARY_FILES := 

OBJ_FILES := $(addprefix $(DERIVED_PATH),$(addsuffix $(OBJ_EXT),$(basename $(notdir $(SOURCE_FILES)))))

SKIPPED_FILES := 

#Code Generation Information

COMPILER_CODEGEN_ARGS := -I"C:/MATLAB/SupportPackages/R2015a/arduinobase/toolbox/realtime/targets/arduino/include" -I"C:/MATLAB/SupportPackages/R2015a/arduinobase/toolbox/realtime/targets/arduino/blocks/sfcn/include" -I"C:/Users/Chris/Documents/GitHub/Arduino_Robot/Arduino_LED_pulse_rtt" -I"C:/Users/Chris/Documents/GitHub/Arduino_Robot" -I"C:/Program Files/MATLAB/MATLAB Production Server/R2015a/extern/include" -I"C:/Program Files/MATLAB/MATLAB Production Server/R2015a/simulink/include" -I"C:/Program Files/MATLAB/MATLAB Production Server/R2015a/rtw/c/src" -I"C:/Program Files/MATLAB/MATLAB Production Server/R2015a/rtw/c/src/ext_mode/common" -I"C:/Program Files/MATLAB/MATLAB Production Server/R2015a/rtw/c/ert" -I"C:/MATLAB/SupportPackages/R2015a/arduino-1.0.5/hardware/arduino/cores/arduino" -I"C:/MATLAB/SupportPackages/R2015a/arduino-1.0.5/hardware/arduino/variants/leonardo" -I"C:/MATLAB/SupportPackages/R2015a/arduino-1.0.5/libraries/Servo" -g -Os -Wall -ffunction-sections -fdata-sections -mmcu=atmega32u4 -D"MODEL=Arduino_LED_pulse" -D"NUMST=1" -D"NCSTATES=0" -D"HAVESTDIO=" -D"ONESTEPFCN=0" -D"TERMFCN=1" -D"MAT_FILE=0" -D"MULTI_INSTANCE_CODE=0" -D"INTEGER_CODE=0" -D"MT=0" -D"CLASSIC_INTERFACE=0" -D"ALLOCATIONFCN=0" -D"TID01EQ=0" -D"F_CPU=16000000" -D"_RUNONTARGETHARDWARE_BUILD_=" -D"ARDUINO=105" -D"_ROTH_LEONARDO_=" -D"MMD=" -D"USB_VID=0x2341" -D"USB_PID=0x8036" -D"_RTT_NUMSERVOS_=0"

COMPILER_TCCFG_ARGS := -c -x none
COMPILER_ARGS := $(COMPILER_CODEGEN_ARGS) $(COMPILER_TCCFG_ARGS)

LINKER_CODEGEN_ARGS :=  -Os -Wl,--gc-sections -mmcu=atmega32u4 -lm 

LINKER_TCCFG_ARGS := -o $(TARGET)
LINKER_ARGS := $(LINKER_CODEGEN_ARGS) $(LINKER_TCCFG_ARGS)

PREBUILD_ARGS := 

POSTBUILD_ARGS := -O ihex -R .eeprom $(TARGET)  Arduino_LED_pulse.hex

EXECUTE_ARGS := 



COMPILER ?= $(subst \,/,C:\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\tools\avr\bin\avr-gcc)

LINKER ?= $(subst \,/,C:\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\tools\avr\bin\avr-gcc)

PREBUILD_TOOL ?= 

POSTBUILD_TOOL ?= $(subst \,/,C:\MATLAB\SupportPackages\R2015a\arduino-1.0.5\hardware\tools\avr\bin\avr-objcopy)

EXECUTE_USES_TARGET = off
ifeq (on,$(EXECUTE_USES_TARGET))
 EXECUTE_TOOL ?= $(TARGET)
else
 EXECUTE_TOOL ?= 
endif
ifeq (windows,$(HOST_PLATFORM))
 RM ?= del /q
else
 RM ?= rm -f
endif
ifeq (windows,$(HOST_PLATFORM))
 MKDIR ?= mkdir
else
 MKDIR ?= mkdir -p
endif

#Targets
.DEFAULT_GOAL := all

.PHONY : all execute prebuild build postbuild info environment check clean

all : execute

ifneq (,$(strip $(EXECUTE_TOOL)))
execute : build
	$(info "Evaluating execute target")
	"$(EXECUTE_TOOL)" $(EXECUTE_ARGS)
else
execute : build
endif

ifneq (.a,$(strip $(TARGET_EXT)))
build : prebuild $(TARGET) $(TARGET_HEX)
	$(info "Evaluating build target")
else
build : prebuild $(TARGET)
	$(info "Evaluating build target")
endif

ifneq (,$(strip $(PREBUILD_TOOL)))
ifneq (.a,$(strip $(TARGET_EXT)))
prebuild : | $(OUTPUT_PATH) $(DERIVED_PATH)
	$(info "Evaluating prebuild target")
	"$(PREBUILD_TOOL)" $(PREBUILD_ARGS)
    else
prebuild : | $(OUTPUT_PATH) $(DERIVED_PATH)
    endif
else
prebuild : | $(OUTPUT_PATH) $(DERIVED_PATH)
endif

ifneq (,$(strip $(POSTBUILD_TOOL)))
ifneq (.a,$(strip $(TARGET_EXT)))
postbuild : $(TARGET)
	$(info "Evaluating postbuild target")
	"$(POSTBUILD_TOOL)" $(POSTBUILD_ARGS)
$(TARGET_HEX) : $(TARGET)
	"$(POSTBUILD_TOOL)" $(POSTBUILD_ARGS)
    else
postbuild : $(TARGET)
    endif
else
postbuild : $(TARGET)
endif

ifneq (,$(strip $(LINKER)))
ifneq (.a,$(strip $(TARGET_EXT)))
ifneq (,$(strip $(POSTBUILD_TOOL)))
$(TARGET) : $(OBJ_FILES) $(LIBRARY_FILES)
	"$(LINKER)" $(OBJ_FILES) $(LIBRARY_FILES) $(LINKER_ARGS)
	"$(POSTBUILD_TOOL)" $(POSTBUILD_ARGS)
else
$(TARGET) : $(OBJ_FILES) $(LIBRARY_FILES)
	"$(LINKER)" $(OBJ_FILES) $(LIBRARY_FILES) $(LINKER_ARGS)
endif
else
$(TARGET) : $(OBJ_FILES)
	"$(LINKER)" $(OBJ_FILES) $(LIBRARY_FILES) $(LINKER_ARGS)
endif

$(OBJ_FILES) : $(SOURCE_FILES) $(HEADER_FILES)
	"$(COMPILER)" $(COMPILER_ARGS) $(SOURCE_FILES)
else
ifneq (,$(strip $(POSTBUILD_TOOL)))
$(TARGET) : $(SOURCE_FILES) $(HEADER_FILES)
	"$(COMPILER)" $(COMPILER_ARGS) $(SOURCE_FILES)
	"$(POSTBUILD_TOOL)" $(POSTBUILD_ARGS)
else
$(TARGET) : $(SOURCE_FILES) $(HEADER_FILES)
	"$(COMPILER)" $(COMPILER_ARGS) $(SOURCE_FILES)
endif
endif

$(OUTPUT_PATH) :
ifeq (,$(wildcard $(OUTPUT_PATH)))
	@$(MKDIR) "$(OUTPUT_PATH)"
endif

$(DERIVED_PATH) :
ifeq (,$(wildcard $(DERIVED_PATH)))
	@$(MKDIR) "$(DERIVED_PATH)"
endif

clean :
	-@$(RM) $(TARGET) $(OBJ_FILES)

info : 
	$(info MODEL_NAME=$(MODEL_NAME))
	$(info HOST_PLATFORM=$(HOST_PLATFORM))
	$(info BUILD_CFG=$(BUILD_CFG))
	$(info TOOL_CHAIN_CFG=$(TOOL_CHAIN_CFG))
	$(info TARGET_EXT=$(TARGET_EXT))
	$(info OBJ_EXT=$(OBJ_EXT))
	$(info SOURCE_PATH=$(SOURCE_PATH))
	$(info OUTPUT_PATH=$(OUTPUT_PATH))
	$(info DERIVED_PATH=$(DERIVED_PATH))
	$(info TARGET_FILE=$(TARGET_FILE))
	$(info TARGET=$(TARGET))
	$(info COMPILER=$(COMPILER))
	$(info COMPILER_ARGS=$(COMPILER_ARGS))
	$(info COMPILER_CODEGEN_ARGS=$(COMPILER_CODEGEN_ARGS))
	$(info COMPILER_TCCFG_ARGS=$(COMPILER_TCCFG_ARGS))
	$(info LINKER=$(LINKER))
	$(info LINKER_ARGS=$(LINKER_ARGS))
	$(info LINKER_CODEGEN_ARGS=$(LINKER_CODEGEN_ARGS))
	$(info LINKER_TCCFG_ARGS=$(LINKER_TCCFG_ARGS))
	$(info PREBUILD_TOOL=$(PREBUILD_TOOL))
	$(info PREBUILD_ARGS=$(PREBUILD_ARGS))
	$(info POSTBUILD_TOOL=$(POSTBUILD_TOOL))
	$(info POSTBUILD_ARGS=$(POSTBUILD_ARGS))
	$(info EXECUTE_TOOL=$(EXECUTE_TOOL))
	$(info EXECUTE_ARGS=$(EXECUTE_ARGS))
	$(info SOURCE_FILES=$(SOURCE_FILES))
	$(info HEADER_FILES=$(HEADER_FILES))
	$(info LIBRARY_FILES=$(LIBRARY_FILES))
	$(info OBJ_FILES=$(OBJ_FILES))
	$(info SKIPPED_FILES=$(SKIPPED_FILES))
	$(info RM=$(RM))
	$(info MKDIR=$(MKDIR))

environment :
	$(if $(findstring windows,$(HOST_PLATFORM)),$(info ENVIRONMENT=$(shell set)),$(info ENVIRONMENT=$(shell env)))