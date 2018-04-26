################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Events.c \
../Sources/main.c \
../Sources/os_tasks.c \
../Sources/rtos_main_task.c 

OBJS += \
./Sources/Events.o \
./Sources/main.o \
./Sources/os_tasks.o \
./Sources/rtos_main_task.o 

C_DEPS += \
./Sources/Events.d \
./Sources/main.d \
./Sources/os_tasks.d \
./Sources/rtos_main_task.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


