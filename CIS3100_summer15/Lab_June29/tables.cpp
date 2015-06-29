#include <iostream>
using namespace std;
int main2()
{
	int i, result;
	for (i=1; i<10; i++)
	{
		for (result=1; result<10; result++)
		{
			cout<< i << "*" << result << "=" << result* i << "\t";
		}
	}
	system ("pause");
	return 0;
}