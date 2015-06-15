#include<iostream>
#include<math.h>

using namespace std;

int cartesian_assign1(){
	
	int x1; //x coordinate for A
	int y1; // y coordinate for A
	int x2; //x coordinate for B
	int y2; // y coordinate for B
	float distance; // distance between A and B

	cout << "Enter coordinates of A: \n x1 = ";
	cin >> x1;
	cout << "y1 = ";
	cin >> y1;

	cout << "Enter coordinates of B: \n x2 = ";
	cin >> x2;
	cout << "y2 = ";
	cin >> y2;

	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "Distance between A and B is: " << distance <<endl;

	return 0;
}
