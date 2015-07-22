#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string x = "Hello World!";

  cout << "x = " << x << endl;

  reverse(x.begin(), x.end());

  cout << "x = " << x << endl;

  return 0;
}
