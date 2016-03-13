################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../IQUEUE.cpp \
../IRUNNABLE.cpp \
../kolejka.cpp \
../kolejkaTest.cpp \
../main.cpp 

OBJS += \
./IQUEUE.o \
./IRUNNABLE.o \
./kolejka.o \
./kolejkaTest.o \
./main.o 

CPP_DEPS += \
./IQUEUE.d \
./IRUNNABLE.d \
./kolejka.d \
./kolejkaTest.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


