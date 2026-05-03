#include <iostream>
using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
	//No constructor
	Rectangle()
	{
		length = 0;
		breadth = 0;
	}
	//Double constructor
	Rectangle(int l, int b)
	{
		length = l;
		breadth = b;
	}
	// Single constructor	
	Rectangle(int x)
	{
		length = x;
		breadth = x;
	}
	int area()
	{
		return length*breadth;
	}
};
int main()
{
	Rectangle r1;
	Rectangle r2(2,5);
	Rectangle r3(4);
	
	cout << "Area of rectangle 1 = " << r1.area() << endl;
	cout << "Area of rectangle 2 = " << r2.area() << endl;
	cout << "Area of rectangle 3 = " << r3.area() << endl;
	
	return 0;
}
