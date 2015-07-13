#include<iostream>
using namespace std;
#include "Cat.h"
// unit test cat class
// create a cat, set its age, have it
// meow, tell us its age, then meow again.

void cat_test()
{
  int Age;
  cout<<"How old is Frisky? ";
  cin>>Age;
  Cat Frisky(Age); // this statement will invoke the constructor
  Frisky.Meow(); // member access operator DOT operator
  cout << "Frisky is a cat who is " ;
  cout << Frisky.GetAge() << " years old.\n"; // access getAge
  Frisky.Meow();
  Age++; // increasing age
  Frisky.SetAge(Age); // this stamenet will reset Frisky's age to the new age
  cout << "Now Frisky is " ;
  cout << Frisky.GetAge() << " years old.\n";
}