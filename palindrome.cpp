/*
 * palindrome.cpp
 *
 *  Created on: May 11, 2015
 *      Author: arun
 */
#include <iostream>
#include "MyHeader.h"
using namespace std;

void palindrome(){
	char word[25] = "madam";
	int length=0; // length of the string
	int flag; // flag to determine if palindrome or not

	for(int i=0;word[i]!='\0';++i){
		++length;
	}
	cout<<"Length of "<<word<<" is: "<<length<<endl;

	for(int j=0;j<length/2;++j){
		if(word[j]!=word[length-1-j])
			flag = 1;
	}
	if (flag == 1)
		cout<<word<<" is not a palindrome."<<endl;
	else
		cout<<word<<" is a palindrome."<<endl;

}
