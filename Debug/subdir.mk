################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../BSM.cpp \
../BSM_unit.cpp \
../Cat.cpp \
../Main.cpp \
../add.cpp \
../arraySort.cpp \
../cat_test.cpp \
../faceDetect.cpp \
../for_loop.cpp \
../if_demo.cpp \
../menu.cpp \
../menu_case.cpp \
../myFactorial.cpp \
../palindrome.cpp \
../switch_demo.cpp \
../timer.cpp 

OBJS += \
./BSM.o \
./BSM_unit.o \
./Cat.o \
./Main.o \
./add.o \
./arraySort.o \
./cat_test.o \
./faceDetect.o \
./for_loop.o \
./if_demo.o \
./menu.o \
./menu_case.o \
./myFactorial.o \
./palindrome.o \
./switch_demo.o \
./timer.o 

CPP_DEPS += \
./BSM.d \
./BSM_unit.d \
./Cat.d \
./Main.d \
./add.d \
./arraySort.d \
./cat_test.d \
./faceDetect.d \
./for_loop.d \
./if_demo.d \
./menu.d \
./menu_case.d \
./myFactorial.d \
./palindrome.d \
./switch_demo.d \
./timer.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


