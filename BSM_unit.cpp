#include<iostream>
using namespace std;
#include "Stock.h"

int bsm_unit(){

	cout << "Stock price simulation here" << endl;
	cout << "Initializing stock" << endl;
	int days = 365; // number of years
	BSM intl(33.41,days,36,0.3,'c');// intel corporation
	for (int i = days; i > 0; --i){		
		if (i % 30 == 0){
			cout << "For day(s) " << i << " to maturity, the value of "<<intl.type() <<" option is $" << intl.eval(i) << endl;
		}
	}
	getchar();
	return 0;
}
