################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Generated_Code/Cpu.c \
../Generated_Code/MainTask.c \
../Generated_Code/clockMan1.c \
../Generated_Code/free_rtos.c \
../Generated_Code/hardware_init.c \
../Generated_Code/osa1.c \
../Generated_Code/pin_init.c \
../Generated_Code/task_blue_LED_OFF.c \
../Generated_Code/task_blue_LED_ON.c \
../Generated_Code/task_free_resource.c 

OBJS += \
./Generated_Code/Cpu.o \
./Generated_Code/MainTask.o \
./Generated_Code/clockMan1.o \
./Generated_Code/free_rtos.o \
./Generated_Code/hardware_init.o \
./Generated_Code/osa1.o \
./Generated_Code/pin_init.o \
./Generated_Code/task_blue_LED_OFF.o \
./Generated_Code/task_blue_LED_ON.o \
./Generated_Code/task_free_resource.o 

C_DEPS += \
./Generated_Code/Cpu.d \
./Generated_Code/MainTask.d \
./Generated_Code/clockMan1.d \
./Generated_Code/free_rtos.d \
./Generated_Code/hardware_init.d \
./Generated_Code/osa1.d \
./Generated_Code/pin_init.d \
./Generated_Code/task_blue_LED_OFF.d \
./Generated_Code/task_blue_LED_ON.d \
./Generated_Code/task_free_resource.d 


# Each subdirectory must supply rules for building sources it contributes
Generated_Code/%.o: ../Generated_Code/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


