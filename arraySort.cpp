/*
 * arraySort.cpp
 * This file implements the common sorting algorithms as functions
 * using arrays. We go through bubble sort,
 *  Created on: Apr 27, 2015
 *      Author: arun
 */
#include <iostream>
#include "MyHeader.h"
#include <time.h>       /* clock_t, clock, CLOCKS_PER_SEC */
using namespace std;

// generic sort algorithm
void arraySort(){
	int array[5];
	cout<<"Enter 5 numbers: "<<endl;
	for(int i=0; i<5; i++){
		cin>>array[i];
	}
	cout<<endl;
	cout<<"Originally entered array by the user is: "<<endl;
	for(int j=0; j<5; j++){
		cout<<array[j];
		cout<<endl;
	}
	cout<<endl;
	clock_t t = clock();
	bubbleSort(array);
	t=clock() -t;
	cout<<"Elapsed time: "<<1000000*((float)t)/CLOCKS_PER_SEC<<" micro sec";
}

// bubble sort implementation using arrays
void bubbleSort(int array[]){
	int hold;
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(array[j]>array[j+1]){
				hold=array[j];
				array[j]=array[j+1];
				array[j+1]=hold;
	}}}
	cout<<"Sorted Array is: "<<endl;
	for(int i=0; i<5; i++){
		cout<<array[i]<<endl;
	}
}
