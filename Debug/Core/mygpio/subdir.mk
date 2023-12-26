################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Core/mygpio/myinputgpio.cpp \
../Core/mygpio/myoutputgpio.cpp 

OBJS += \
./Core/mygpio/myinputgpio.o \
./Core/mygpio/myoutputgpio.o 

CPP_DEPS += \
./Core/mygpio/myinputgpio.d \
./Core/mygpio/myoutputgpio.d 


# Each subdirectory must supply rules for building sources it contributes
Core/mygpio/%.o: ../Core/mygpio/%.cpp Core/mygpio/subdir.mk
	arm-none-eabi-g++ "$<" -mcpu=cortex-m4 -std=gnu++14 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F446xx -c -I../Core/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/William/STM32CubeIDE/workspace_1.8.0/NUCLEO-F446RE/Core/mygpio" -I"C:/Users/William/STM32CubeIDE/workspace_1.8.0/NUCLEO-F446RE/Core/mytimer" -I"C:/Users/William/STM32CubeIDE/workspace_1.8.0/NUCLEO-F446RE/Core/myqueue" -O0 -ffunction-sections -fdata-sections -fno-exceptions -fno-rtti -fno-use-cxa-atexit -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Core-2f-mygpio

clean-Core-2f-mygpio:
	-$(RM) ./Core/mygpio/myinputgpio.d ./Core/mygpio/myinputgpio.o ./Core/mygpio/myoutputgpio.d ./Core/mygpio/myoutputgpio.o

.PHONY: clean-Core-2f-mygpio

