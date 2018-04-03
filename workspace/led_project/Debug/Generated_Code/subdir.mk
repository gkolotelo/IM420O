################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/Task_BlueLed.c \
../Generated_Code/Task_GreenLed.c \
../Generated_Code/Task_RedLed.c \
../Generated_Code/clockMan1.c \
../Generated_Code/free_rtos.c \
../Generated_Code/hardware_init.c \
../Generated_Code/osa1.c \
../Generated_Code/pin_init.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/Task_BlueLed.o \
./Generated_Code/Task_GreenLed.o \
./Generated_Code/Task_RedLed.o \
./Generated_Code/clockMan1.o \
./Generated_Code/free_rtos.o \
./Generated_Code/hardware_init.o \
./Generated_Code/osa1.o \
./Generated_Code/pin_init.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/Task_BlueLed.d \
./Generated_Code/Task_GreenLed.d \
./Generated_Code/Task_RedLed.d \
./Generated_Code/clockMan1.d \
./Generated_Code/free_rtos.d \
./Generated_Code/hardware_init.d \
./Generated_Code/osa1.d \
./Generated_Code/pin_init.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/hal/inc" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/system/inc" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/osa/inc" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/CMSIS/Include" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/devices" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/Sources" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/Generated_Code" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/rtos/FreeRTOS/include" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/aluno/Documents/gkk/IM420o/workspace/led_project/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


