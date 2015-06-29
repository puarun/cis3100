/* write a recursive function to determine if the 
number entered is prime or not.
*/
#include<iostream>

using namespace std;
// function prototype
bool checkprime(int,int);


int main_recursion(){
	int number; //user input
	bool prime; // variable to contain prime or not

	cout << "Please enter the number greater than 1 to check: ";
	cin >> number;
	
	// check if division of number by 1,2,3 ...,number-1 gives 
	// a remainder of 0
	prime = checkprime(number, number-1);

	//cout << (prime ? "It's prime!" : "It's not prime") << endl;
	
	if (prime) {
				cout << "It's prime!" << endl;
				}else {
				cout << "It's not prime!" << endl;
				}
	return 0;
}

bool  checkprime (int number, int i)
{
	if (i>1){
			if (number%i ==0)return false;
				// you are counting down from 
				// number-1 (initial value of i)
				// all the way to 1
				// function recursive call
				// the final value of i will be 1
				// if the number is prime
				return checkprime (number, (i-1));
				
			}else if (i==1){
				return true;
			}
}