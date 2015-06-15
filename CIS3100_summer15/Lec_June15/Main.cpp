#include <iostream>
using namespace std;
int grade_assign1()
{
	int score;
	cout << "What is your score?"<< endl;
	cin >> score;
	if (score == 100) {
		cout << "Perfect Score!"<< endl;}
	else if (score >=90) {
		cout << "Your grade is an A" << endl;}
	else if (score >=80) {
		cout << "Your grade is a B" << endl;}
	else if (score >=70) {
		cout << "Your grade is a C" << endl;}
	else if (score >=60) {
		cout << "Your grade is a D" << endl;}
	else {
		cout << "Your grade is an F" << endl;}

	return 0;
	}
