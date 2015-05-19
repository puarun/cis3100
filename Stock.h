// stock price simulation header file

#ifndef STOCK_H
#define STOCK_H
int main();// main file

class BSM
{
public:
	double t,S,K,r,sd;// call stock time strike rfr
	char flag;
	BSM(double Q, int t, double S, double vol, char f);
	~BSM();
	double CND(double X);
	double eval(double time = 365);
	char *type();
};
int bsm_unit(); // unit test for bsm class


#endif // !STOCK_H
