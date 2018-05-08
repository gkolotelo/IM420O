################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/hal/led/ledrgb_hal.c 

OBJS += \
./Sources/hal/led/ledrgb_hal.o 

C_DEPS += \
./Sources/hal/led/ledrgb_hal.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/hal/led/%.o: ../Sources/hal/led/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/hal/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/hal/src/sim/MKL25Z4" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/system/src/clock/MKL25Z4" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/system/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/osa/inc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/CMSIS/Include" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/devices" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/devices/MKL25Z4/include" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/platform/devices/MKL25Z4/startup" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/Sources" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/Generated_Code" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/rtos/FreeRTOS/include" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/SDK/rtos/FreeRTOS/port/gcc" -I"D:/Users/guilherme/Documents/University/Current Semester/IM420_O/IM420O/workspace/led_project/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


