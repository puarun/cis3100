/*
 * switch_demo.cpp
 *
 *  Created on: Apr 23, 2015
 *      Author: arun
 */
#include <iostream>
#include "MyHeader.h"
using namespace std;


void switch_demo(){
	int speed = 50;// miles per hour
	cout<<"Enter school year (1-4):"<<endl;
	cin>>speed;
	switch(speed){
		case 1:cout << "Hi Freshman!";break;
	    case 2:cout << "Sophomore, alrite!";break;   //execution starts at this case label
	    case 3:cout << "Junior, hmm";break;
	    case 4:cout <<"Senior, good job!";break;
	    default:cout <<"Invalid entry";break;
	}
}


