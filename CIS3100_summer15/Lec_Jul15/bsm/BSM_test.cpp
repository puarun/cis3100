// This function is a unit test for the Black Scholes model
#include<iostream>
#include<conio.h>
using namespace std;
#include "Stock.h"

int bsm_unit(){

	cout << "Stock price simulation here" << endl;
	cout << "Initializing stock" << endl;
	int days = 365; // number of days 
	BSM intl(29.69,days,36,0.3,'c');// creating an intel corporation
	// object with Black Scholes
	// Calculate value of option every 30 days until expiration
	for (int i = days; i > 0; --i){		
		if (i % 30 == 0){
			cout << "For day(s) " << i << " to maturity, the value of " <<" option is $" << intl.eval(i) << endl;
		}
	}
	getchar();
	return 0;
}