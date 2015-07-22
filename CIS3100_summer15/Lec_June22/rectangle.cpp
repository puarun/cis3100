#include <iostream>
using namespace std;
class Rectangle // Class Rectangle
{
public:
	Rectangle(float=1, float=1); // Constructor
	double perimeter(void){return (length*2 + width*2);} // Perimeter function
	double area(void) {return (length*width);} // Area funcion
	void show();// show length and width
private:
	float length;
	float width;
}; // End of class Rectangle
Rectangle::Rectangle(float L, float W) // Scope function
{
	length=L;
	width=W;
}
void Rectangle::show()
{
	cout<<"Length = "<<length<<endl;
	cout<<"Width = "<<width<<endl;
}


int main() // main()
{
	Rectangle R(5,6);
	cout<<"Area is: "<<R.area()<<endl;
	cout<<"Perimeter is: "<<R.perimeter()<<endl;
	R.show();
	return 0;
} // End of main()