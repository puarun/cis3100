/*
 * timer.cpp
 *
 *  Created on: May 2, 2015
 *      Author: arun
 */
#include <iostream>
#include "MyHeader.h"
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
using namespace std;

// generic sort algorithm
void timer(clock_t t){
	t=clock() -t;
	cout<<"Elapsed time: "<<1000000*((float)t)/CLOCKS_PER_SEC<<" micro sec";
}



