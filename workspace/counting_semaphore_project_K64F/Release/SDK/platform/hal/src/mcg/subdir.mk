################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/hal/src/mcg/fsl_mcg_hal.c \
../SDK/platform/hal/src/mcg/fsl_mcg_hal_modes.c 

OBJS += \
./SDK/platform/hal/src/mcg/fsl_mcg_hal.o \
./SDK/platform/hal/src/mcg/fsl_mcg_hal_modes.o 

C_DEPS += \
./SDK/platform/hal/src/mcg/fsl_mcg_hal.d \
./SDK/platform/hal/src/mcg/fsl_mcg_hal_modes.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/hal/src/mcg/%.o: ../SDK/platform/hal/src/mcg/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


