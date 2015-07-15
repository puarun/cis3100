// header file for the Black Scholes model class
#ifndef STOCK_H
#define STOCK_H
int main();// main file

class BSM
{
public:
	double t,S,K,r,sd;// call stock time strike rfr
	char flag; // put option or call option
	BSM(double Q, int t, double S, double vol, char f); // constructor
	~BSM(); // destructor
	double CND(double X); // math function 1
	double eval(double time = 365); // math function 2
	//char *type();// option type

};
int bsm_unit(); // unit test for bsm class


#endif // !STOCK_H