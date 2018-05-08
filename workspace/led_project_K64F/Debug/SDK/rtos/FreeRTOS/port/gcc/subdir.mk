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
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MK64FN1M0VLL12" -D"FSL_RTOS_FREE_RTOS" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/hal/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/hal/src/sim/MK64F12" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/system/src/clock/MK64F12" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/system/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/osa/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/CMSIS/Include" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/devices" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/devices/MK64F12/include" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/utilities/src" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/utilities/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/platform/devices/MK64F12/startup" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/Generated_Code/SDK/platform/devices/MK64F12/startup" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/Sources" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/Generated_Code" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/rtos/FreeRTOS/include" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/SDK/rtos/FreeRTOS/port/gcc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -x assembler-with-cpp -D"FSL_RTOS_FREE_RTOS" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project_K64F/Generated_Code/SDK/rtos/FreeRTOS/config" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


