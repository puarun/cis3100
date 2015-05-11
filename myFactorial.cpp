#include <iostream>
#include "MyHeader.h"
using namespace std;

int myFactorial( int integer)
{
if( integer == 1)
     return 1; // solve problem for base case where n = 1
else
       {
       return (integer * (myFactorial(integer-1)));
       // we assume that if problem is solved for base case
       // then it also works for n, n-1 ... 1
       }
}
