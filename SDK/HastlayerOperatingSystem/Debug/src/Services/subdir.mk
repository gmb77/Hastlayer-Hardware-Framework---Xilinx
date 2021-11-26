################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Services/MemoryManager.cpp \
../src/Services/RegisterManager.cpp \
../src/Services/TimerCallbackManager.cpp 

OBJS += \
./src/Services/MemoryManager.o \
./src/Services/RegisterManager.o \
./src/Services/TimerCallbackManager.o 

CPP_DEPS += \
./src/Services/MemoryManager.d \
./src/Services/RegisterManager.d \
./src/Services/TimerCallbackManager.d 


# Each subdirectory must supply rules for building sources it contributes
src/Services/%.o: ../src/Services/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I/home/halpa/Documents/Smith-Waterman/Hastlayer/Hastlayer-Hardware-Framework---Xilinx/SDK/Hastlayer_Platform/export/Hastlayer_Platform/sw/Hastlayer_Platform/standalone_ps7_cortexa9_0/bspinclude/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


