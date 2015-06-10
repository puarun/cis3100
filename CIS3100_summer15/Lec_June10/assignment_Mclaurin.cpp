/* Homework solution Mclaurin series
Sum = 1 + x + x^2 + x^3 + ... + x^n
Author: Arun
Date: 6/10/15
// 
*/

#include <iostream>
#include <cmath>
// cmath contains the pow function which is used to 
// raise to the power of something (hint: stackoverflow)
using namespace std;

int assigment_Mclairun(){
	int i = 0; // raised to the power of 
	double sum = 0; // sum of the series
	int base, no; // base is the base in the expression

	// get the value of base from the user
	cout << "Enter base: ";
	cin >> base;
	cout << "Enter number of terms: ";
	cin >> no;

	// Summing up the terms using a while loop
	if (no != 1){
		while(i<no){
			sum += pow(base,i);
			i++;// i = i+1
		}
	}
	else
		sum = 1;
	cout << "Sum of all terms is: " << sum << endl;
	return 0;
}
