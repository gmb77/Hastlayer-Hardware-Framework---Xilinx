################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Services/Ethernet/DefaultNetworkInterfaceAccessor.cpp \
../src/Services/Ethernet/EchoServerTcpAcceptCallbackProvider.cpp \
../src/Services/Ethernet/EchoServerUdpReceiveCallbackProvider.cpp \
../src/Services/Ethernet/EthernetCommunicationServer.cpp \
../src/Services/Ethernet/EthernetManager.cpp \
../src/Services/Ethernet/InputOutputMemoryTcpAcceptCallbackProvider.cpp \
../src/Services/Ethernet/WhoIsAvailableUdpReceiveCallbackProvider.cpp 

OBJS += \
./src/Services/Ethernet/DefaultNetworkInterfaceAccessor.o \
./src/Services/Ethernet/EchoServerTcpAcceptCallbackProvider.o \
./src/Services/Ethernet/EchoServerUdpReceiveCallbackProvider.o \
./src/Services/Ethernet/EthernetCommunicationServer.o \
./src/Services/Ethernet/EthernetManager.o \
./src/Services/Ethernet/InputOutputMemoryTcpAcceptCallbackProvider.o \
./src/Services/Ethernet/WhoIsAvailableUdpReceiveCallbackProvider.o 

CPP_DEPS += \
./src/Services/Ethernet/DefaultNetworkInterfaceAccessor.d \
./src/Services/Ethernet/EchoServerTcpAcceptCallbackProvider.d \
./src/Services/Ethernet/EchoServerUdpReceiveCallbackProvider.d \
./src/Services/Ethernet/EthernetCommunicationServer.d \
./src/Services/Ethernet/EthernetManager.d \
./src/Services/Ethernet/InputOutputMemoryTcpAcceptCallbackProvider.d \
./src/Services/Ethernet/WhoIsAvailableUdpReceiveCallbackProvider.d 


# Each subdirectory must supply rules for building sources it contributes
src/Services/Ethernet/%.o: ../src/Services/Ethernet/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: ARM v7 g++ compiler'
	arm-none-eabi-g++ -Wall -O0 -g3 -c -fmessage-length=0 -MT"$@" -mcpu=cortex-a9 -mfpu=vfpv3 -mfloat-abi=hard -I/home/halpa/Documents/Smith-Waterman/Hastlayer/Hastlayer-Hardware-Framework---Xilinx/SDK/Hastlayer_Platform/export/Hastlayer_Platform/sw/Hastlayer_Platform/standalone_ps7_cortexa9_0/bspinclude/include -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


