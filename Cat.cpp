/*
 * Cat.cpp
 * Class definitions for cat class
 *  Created on: May 6, 2015
 *      Author: arun
 */
#include <iostream>
#include "Cat.h"
using namespace std;
//namespace std {


 // constructor of Cat,
Cat::Cat(int initialAge)
{
  itsAge = initialAge;
  //string = new char[10];
}

Cat::~Cat()                 // destructor, just an example
{
    //delete[] ;
}

// GetAge, Public accessor function
// returns value of itsAge member
int Cat::GetAge()
{
   return itsAge;
}

// Definition of SetAge, public
// accessor function

 void Cat::SetAge(int age)
{
   // set member variable its age to
   // value passed in by parameter age
   itsAge = age;
}

// definition of Meow method
// returns: void
// parameters: None
// action: Prints "meow" to screen
void Cat::Meow()
{
   cout << "Meow.\n";
}
//}

