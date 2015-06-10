/* An example program to illustrate switch case and while loop
The program will show a menu option to the user and will execute 
something for each menu option.
*/
#include<iostream>
using namespace std;

int main_casemenu(){
	int input, number; // input is to get what the user wants to do
	// number is the number to which we do the operations

	// get value from user
	cout << "Enter your start number (an integer): " << endl;
	cin >> number;

	// presenting start menu options
	start_menu:
		cout << endl << "Please choose from the menu: "<< endl;
		cout << "1. Add 2" << endl;
		cout << "2. Multiply by 2" <<endl;
		cout << "3. Subtract 4" << endl;
		cout << "4. Quit" << endl;
		cin >> input;
	
	// Demo of switch case to decide what the user wants to do
	// based on their input
		switch(input){
		// case is a keyword followed by value being checked and
			// then you have a colon
			case 1: number = number +2; break;
			case 2: number = number * 2; break;
			case 3: number = number - 4; break;
			default: cout << "Goodbye .."; goto stop;
		}
		// if user has not quit present menu again
		cout << "The result is: "<< number;
		goto start_menu;
	// if user has quit then finish execution
	stop:
		return 0;

}