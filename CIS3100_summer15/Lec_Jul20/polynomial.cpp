// Coding Newbie series by Arun.P.U.
//  main.cpp
//  codingInterview
//
//  Created by Arun on 10/29/14.
//  Copyright (c) 2014 APU. All rights reserved.
//
//Implementing a binary search
#include <iostream>
#include <math.h>
//#include <array>
//#include <map>

using namespace std;

class poly
{
	double coeff[3];
	int exp[3];
	int length;
	int var;

public:

	poly(double co[], int e[])
	{
		length = 3;
		for(int i=0;i<length;i++){
			coeff[i] = co[i];
			exp[i] = e[i];
		}

		var = 2;
	}
	poly()
	{
		length = 0;
		var = 2;
	}
	double sum()
	{
		double sum1 = 0;
		for (int i = 0; i < length; i++)
		{
			sum1 += coeff[i]*pow(var,exp[i]);
		}
		return sum1;
	}
	void print()
	{
		cout << "Base of the polynomial is: " << var << endl;
		cout << "The polynomial is:\n";
		for (int i = 0; i < length; i++)
		{
			cout<<coeff[i]<<"*x"<<"^"<<exp[i];
			if (i != length - 1)
				cout << "+";
		}
		cout << endl;
	}
	void diff()
	{
		for (int i = 0; i < length; i++)
		{
			if (exp[i]!=0){
				coeff[i]*=coeff[i]*exp[i];
				exp[i]-=exp[i]-1;
			}
			else
				coeff[i]=0;
		}
	}
};

int main()
{
	double coeff[] = { 2.1,2.2,3.1 };
	int exp[] = { 1, 2, 3 };
	int number = sizeof(exp)/sizeof(exp[0]);
	poly Term( coeff, exp);
	Term.print();
	cout << "Sum of the polynomial is: "<<Term.sum()<< endl;
	Term.diff();
	Term.print();
	cout << "Sum of the differentiated polynomial is: " << Term.sum() << endl;
	return 0;
}
