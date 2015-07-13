#pragma once

void cat_test(); // unit test for the class Cat

class Cat {
public:
	Cat(int initialAge);     // constructor
	~Cat();                  // destructor
	int GetAge();            // accessor function
	void SetAge(int age);    // accessor function
	void Meow();
private:                   // begin private section
   int itsAge;              // member variable
   //char * string;
};
