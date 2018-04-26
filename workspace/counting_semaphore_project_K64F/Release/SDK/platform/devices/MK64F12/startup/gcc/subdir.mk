################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_UPPER_SRCS += \
../SDK/platform/devices/MK64F12/startup/gcc/startup_MK64F12.S 

OBJS += \
./SDK/platform/devices/MK64F12/startup/gcc/startup_MK64F12.o 

S_UPPER_DEPS += \
./SDK/platform/devices/MK64F12/startup/gcc/startup_MK64F12.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/devices/MK64F12/startup/gcc/%.o: ../SDK/platform/devices/MK64F12/startup/gcc/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


