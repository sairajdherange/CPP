################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assignment6_2.cpp \
../src/circle.cpp \
../src/rectangle.cpp \
../src/shape.cpp \
../src/square.cpp 

OBJS += \
./src/Assignment6_2.o \
./src/circle.o \
./src/rectangle.o \
./src/shape.o \
./src/square.o 

CPP_DEPS += \
./src/Assignment6_2.d \
./src/circle.d \
./src/rectangle.d \
./src/shape.d \
./src/square.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


