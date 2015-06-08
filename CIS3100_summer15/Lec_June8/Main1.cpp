#include <iostream>

using namespace std;

int main1(){
	// declaration of variable age
	int age;
	cout << "enter age: ";
	cin >> age;
	
	if (age<100){
		cout<< "you're young"<<endl;}
	else if (age==100){
		  	cout<< " not that old"<<endl;}
	else {
		  	cout<< "you are old"<<endl;
		  	} 

	return 0;
}