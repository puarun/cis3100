/* This function implements multiple CPP functions in different files
Integrates them using a user defined header file
Author:
Date:
*/
#include<iostream>
#include "myHeader.h"

using namespace std;

int main(){
	int input,number;// we need two variables inout to store the users input
	// number to store the start value
	
	// get the start value from user
	cout <<"Enter your start number (an integer): "<<endl;
	cin>>number;
	// Declare the mehnu options
	start_menu:
		cout << endl << "Please choose from the menu: "<< endl;
		cout << "1. Add 1" <<endl;
		cout << "2. Multiply by 2" <<endl;
		cout << "3. Subtract 4" <<endl;
		cout << "4. Quit"<< endl;
		cin >> input;
// process the menu option entered by the user
	switch(input){
			case 1:number = add1(number);cout << number;break;
		    case 2:number = mul2(number);cout << number;break;
		    case 3:number = sub4(number);cout << number;break;
		    default:cout <<"Goodbye ..";goto stop;
	}

		goto start_menu;

		stop:
			return 0; 	

}
