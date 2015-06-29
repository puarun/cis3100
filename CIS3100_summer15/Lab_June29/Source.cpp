#include <iostream>
using namespace std;

int minval (int p1, int p2, int p3);
int maxval (int p1, int p2, int );

int main () {

int n1,n2,n3,max,min;

cout << "Please enter the first integer: " << endl;
cin >> n1;
cout << "Please enter the second integer: " << endl;
cin >> n2;
cout << "Please enter the third intger: " <<endl;
cin >> n3;
min = minval (n1,n2,n3);
cout << "The minimum of the three integers is: " << min << endl;
max = maxval (n1,n2,n3);
cout << "The maximum of the three integers is: " << max << endl;

return 0;
}

int minval (int p1, int p2, int p3)
{
	int min =p1;

	if ((p1 <= p2) && (p1 <= p3))
		min =p1;
	else if ((p2 <= p1) && (p2 <= p3))
		min =p2;
	else if ((p3 <= p1) && (p3 <= p2))
		min =p3;
	else cout << "Sorry";

return min;
}

int maxval (int p1, int p2, int p3)
{
	int max =p1;

	if ((p1 >= p2) && (p1 >= p3))
		max= p1;
	else if ((p2 >= p1) && (p2 >= p3))
		max= p2;
	else if ((p3 >= p1) && (p3 >= p2))
		max= p3;
	else cout << "Sorry";

	return max;

}
