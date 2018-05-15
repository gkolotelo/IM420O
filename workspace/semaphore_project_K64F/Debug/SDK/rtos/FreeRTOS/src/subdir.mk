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
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MK64FN1M0VLL12" -D"FSL_RTOS_FREE_RTOS" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/hal/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/hal/src/sim/MK64F12" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/system/src/clock/MK64F12" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/system/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/osa/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/CMSIS/Include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/devices" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/devices/MK64F12/include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/utilities/src" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/utilities/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/platform/devices/MK64F12/startup" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Generated_Code/SDK/platform/devices/MK64F12/startup" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Sources" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Generated_Code" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/rtos/FreeRTOS/include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/SDK/rtos/FreeRTOS/port/gcc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/semaphore_project_K64F/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


