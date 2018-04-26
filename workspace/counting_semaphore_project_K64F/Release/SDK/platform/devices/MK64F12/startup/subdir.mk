################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/devices/MK64F12/startup/system_MK64F12.c 

OBJS += \
./SDK/platform/devices/MK64F12/startup/system_MK64F12.o 

C_DEPS += \
./SDK/platform/devices/MK64F12/startup/system_MK64F12.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/devices/MK64F12/startup/%.o: ../SDK/platform/devices/MK64F12/startup/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


