#include <iostream>
using namespace std;
class Rectangle // Class Rectangle
{
public:
Rectangle(float=1, float=1); // Constructor
float getLength(){return length;}
void setLength(float L);
float getWidth(){return width;}
void setWidth(float W);
double perimeter(void){return (length*2 + width*2);} // Perimeter function
double area(void) {return length*width);} // Area funcion

private:
float length;
float width;
}; // End of class Rectangle

Rectangle::Rectangle(float L, float W) // Scope function
{
length=L;
width=W;
}
double Rectangle:perimeter(float L, float W)
{
	return L*W;


}
double Rectangle::area(float L, float W)
{
	return 2*(L+W);

}
void Rectangle::setWidth(float W)
{
if ((W < 0.0) || (W > 20.0))   
     {  
        width = 1.0;
     }  
     else 
        {  
          width = W;  
        }  
   return;  


}
void Rectangle::setLength(float L)
{
do
cout << "Please enter a valid length: " <<endl;
cin >> L;
	while ((L < 0.0) || (L > 20.0))   
     
     else 
        {  
          Length = L;  
        }  
   return;  


}
void Rectangle::get(float L, float W)
{



}
int main() // main()
{
	Rectangle R(5,6);
	cout<<"Area is: "<<R.area();
	cout<<"Perimeter is: "<<R.perimeter();

	return 0;
} // End of main()
