/*
 * Cat.h
 *
 *  Created on: May 6, 2015
 *      Author: arun
 *      Header for Cat class
 */

#ifndef CAT_H_
#define CAT_H_

//namespace std {
void cat_test();
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

//} /* namespace std */

#endif /* CAT_H_ */


