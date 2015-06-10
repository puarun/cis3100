################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../CIS3100_summer15/Lec_June10/For_loop_table.cpp \
../CIS3100_summer15/Lec_June10/Main_casemenu.cpp \
../CIS3100_summer15/Lec_June10/assignment_Mclaurin.cpp 

OBJS += \
./CIS3100_summer15/Lec_June10/For_loop_table.o \
./CIS3100_summer15/Lec_June10/Main_casemenu.o \
./CIS3100_summer15/Lec_June10/assignment_Mclaurin.o 

CPP_DEPS += \
./CIS3100_summer15/Lec_June10/For_loop_table.d \
./CIS3100_summer15/Lec_June10/Main_casemenu.d \
./CIS3100_summer15/Lec_June10/assignment_Mclaurin.d 


# Each subdirectory must supply rules for building sources it contributes
CIS3100_summer15/Lec_June10/%.o: ../CIS3100_summer15/Lec_June10/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


