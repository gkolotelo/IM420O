################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/utilities/src/fsl_debug_console.c \
../SDK/platform/utilities/src/fsl_misc_utilities.c \
../SDK/platform/utilities/src/print_scan.c 

OBJS += \
./SDK/platform/utilities/src/fsl_debug_console.o \
./SDK/platform/utilities/src/fsl_misc_utilities.o \
./SDK/platform/utilities/src/print_scan.o 

C_DEPS += \
./SDK/platform/utilities/src/fsl_debug_console.d \
./SDK/platform/utilities/src/fsl_misc_utilities.d \
./SDK/platform/utilities/src/print_scan.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/utilities/src/%.o: ../SDK/platform/utilities/src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=hard -mfpu=fpv4-sp-d16 -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MK64FN1M0VLL12" -D"FSL_RTOS_FREE_RTOS" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/hal/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/hal/src/sim/MK64F12" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/system/src/clock/MK64F12" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/system/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/osa/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/CMSIS/Include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/devices" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/devices/MK64F12/include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/utilities/src" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/utilities/inc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/platform/devices/MK64F12/startup" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/Generated_Code/SDK/platform/devices/MK64F12/startup" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/Sources" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/Generated_Code" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/rtos/FreeRTOS/include" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/SDK/rtos/FreeRTOS/port/gcc" -I"//vmware-host/Shared Folders/Documents/University/Current Semester/IM420_O/IM420O/workspace/queue_project_K64F/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


