################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/rtos/FreeRTOS/port/gcc/port.c 

S_UPPER_SRCS += \
../SDK/rtos/FreeRTOS/port/gcc/portasm.S 

OBJS += \
./SDK/rtos/FreeRTOS/port/gcc/port.o \
./SDK/rtos/FreeRTOS/port/gcc/portasm.o 

C_DEPS += \
./SDK/rtos/FreeRTOS/port/gcc/port.d 

S_UPPER_DEPS += \
./SDK/rtos/FreeRTOS/port/gcc/portasm.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


