/*
 * switch_demo.cpp
 *
 *  Created on: Apr 23, 2015
 *      Author: arun
 */
#include <iostream>
#include "MyHeader.h"
#include <time.h>
using namespace std;


void for_loop(){
	clock_t t = clock();
	cout<<"Number     "<<"Square      "<<"Cube"<<endl;
	for(int i=1; i<100; ++i){
		cout<<i<<"         "<<i*i<<"          "<<i*i*i<<endl;
	}
	timer(t);
}
