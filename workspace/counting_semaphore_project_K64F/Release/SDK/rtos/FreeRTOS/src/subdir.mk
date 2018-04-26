################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/rtos/FreeRTOS/src/croutine.c \
../SDK/rtos/FreeRTOS/src/event_groups.c \
../SDK/rtos/FreeRTOS/src/heap_1.c \
../SDK/rtos/FreeRTOS/src/heap_2.c \
../SDK/rtos/FreeRTOS/src/heap_3.c \
../SDK/rtos/FreeRTOS/src/heap_4.c \
../SDK/rtos/FreeRTOS/src/heap_5.c \
../SDK/rtos/FreeRTOS/src/list.c \
../SDK/rtos/FreeRTOS/src/queue.c \
../SDK/rtos/FreeRTOS/src/tasks.c \
../SDK/rtos/FreeRTOS/src/timers.c 

OBJS += \
./SDK/rtos/FreeRTOS/src/croutine.o \
./SDK/rtos/FreeRTOS/src/event_groups.o \
./SDK/rtos/FreeRTOS/src/heap_1.o \
./SDK/rtos/FreeRTOS/src/heap_2.o \
./SDK/rtos/FreeRTOS/src/heap_3.o \
./SDK/rtos/FreeRTOS/src/heap_4.o \
./SDK/rtos/FreeRTOS/src/heap_5.o \
./SDK/rtos/FreeRTOS/src/list.o \
./SDK/rtos/FreeRTOS/src/queue.o \
./SDK/rtos/FreeRTOS/src/tasks.o \
./SDK/rtos/FreeRTOS/src/timers.o 

C_DEPS += \
./SDK/rtos/FreeRTOS/src/croutine.d \
./SDK/rtos/FreeRTOS/src/event_groups.d \
./SDK/rtos/FreeRTOS/src/heap_1.d \
./SDK/rtos/FreeRTOS/src/heap_2.d \
./SDK/rtos/FreeRTOS/src/heap_3.d \
./SDK/rtos/FreeRTOS/src/heap_4.d \
./SDK/rtos/FreeRTOS/src/heap_5.d \
./SDK/rtos/FreeRTOS/src/list.d \
./SDK/rtos/FreeRTOS/src/queue.d \
./SDK/rtos/FreeRTOS/src/tasks.d \
./SDK/rtos/FreeRTOS/src/timers.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS/src/%.o: ../SDK/rtos/FreeRTOS/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	echo -mcpu=cortex-m3 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections  -g -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


