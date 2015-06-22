################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CIS3100_summer15/Lec_June15/Main.cpp \
../CIS3100_summer15/Lec_June15/Main1.cpp 

OBJS += \
./CIS3100_summer15/Lec_June15/Main.o \
./CIS3100_summer15/Lec_June15/Main1.o 

CPP_DEPS += \
./CIS3100_summer15/Lec_June15/Main.d \
./CIS3100_summer15/Lec_June15/Main1.d 


# Each subdirectory must supply rules for building sources it contributes
CIS3100_summer15/Lec_June15/%.o: ../CIS3100_summer15/Lec_June15/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


