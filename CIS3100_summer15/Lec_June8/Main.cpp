#include <iostream>

using namespace std;

int main(){
	// declaration of variable age
	int age = 1;
 	while(age>=2)// less than will go into an infinite loop
	{
		age=age+2;// age = age+1;
	}	
	cout<< "you are old enough"<<endl;
	return 0;
}