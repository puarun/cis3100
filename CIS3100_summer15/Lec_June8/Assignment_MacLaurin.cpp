#include <iostream>
#include <cmath>
//#include "MyHeader.h"
//#include "Cat.h"
//#include "Stock.h"
using namespace std;

int main_assignMclaurin(){
	int i=0;
	double sum = 0;
	int base,no;

	cout<<"Enter base: ";
	cin>>base;
	cout<<"Enter number of terms: ";
	cin>>no;

	while(i<no){
		sum+=pow(base,i);
		i++;
	}
	cout<<"Sum of all terms is: "<<sum;
	return 0;
}
