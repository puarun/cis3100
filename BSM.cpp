#include "Stock.h"
#include <cmath>
#ifndef Pi 
#define Pi 3.141592653589793238462643 
#endif 

BSM::BSM(double Quote, int time, double Strike, double vol, char f)
{
	S = Quote; // current stock price
	t = time; // days until expiration
	K = Strike; // strike price
	r = 0.13*0.01; // risk free rate
	sd = vol;
	flag=f;
}


BSM::~BSM()
{
}

double BSM::CND(double X)
{
	double L, K, w;
	double const a1 = 0.31938153, a2 = -0.356563782, a3 = 1.781477937;
	double const a4 = -1.821255978, a5 = 1.330274429;
	L = fabs(X);
	K = 1.0 / (1.0 + 0.2316419 * L);
	w = 1.0 - 1.0 / sqrt(2 * Pi) * exp(-L *L / 2) * (a1 * K + a2 * K *K + a3 * pow(K, 3) + a4 * pow(K, 4) + a5 * pow(K, 5));
	if (X < 0){
		w = 1.0 - w;
	}
	return w;
}

double BSM::eval(double year){
	double yr = static_cast<double> (year / 365);
	double d1 = (log(S / K) + (r + pow(sd, 2) / 2)*yr) / (sd*sqrt(yr));
	double d2 = d1 - sd*sqrt(yr);
	if (flag == 'c'){
		return S *CND(d1) - K * exp(-r*yr)*CND(d2);// theoretical call value
	}
	else{
		return K * exp(-r * yr) * CND(-d2) - S * CND(-d1);// put option
	}	
}
char * BSM::type(){
	if (flag == 'c'){
		return "call";
	}
	else{
		return "put";
	}
}
