/*
 * switch_demo.cpp
 *
 *  Created on: Apr 23, 2015
 *      Author: arun
 */
#include <iostream>
#include "MyHeader.h"
using namespace std;


void if_demo(){
	int speed = 50;// miles per hour
	cout<<"What is your speed in MPH?"<<endl;
	cin>>speed;
	if(speed<=50)
		cout<<"You're good, keep going!";
	else
		cout<<"Slow down, you're speeding";
}


