/* This is a demo of for loop and the time library in C++
this library can retreive the system time and help you measure
execution time of your program
Author:
Date:
*/
#include <iostream>
#include <time.h>

using namespace std;

int main (){
	clock_t t = clock(); // the variable t hold start time of the program
	int limit = 100; // initialize number of terms to 10
	// using a for loop demonstarte table
	cout << "Number		" << "Square		" << "Cube		"<<endl;
	//cout << "*******************************************************" <<endl;
	cout<<endl;
	for(int i = 1; i<limit; i++){
		cout << i << "		" << i*i << "		" << i*i*i << endl;	
	}
	cout << endl;
	t = clock() - t;
	// the compiler gives time in number of cpu clocks
	// hence we need to divide it by clocks_per_sec (which is a const)
	// to get the time
	cout << "Elapsed time: "<<1000000*((float)t)/CLOCKS_PER_SEC<<" micro sec" << endl;
	return 0;
}
