#include <iostream>
using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		
	Rectangle(int l = 0, int b = 0)
	{
		length = l;
		breadth = b;
		//Constructor
		cout << length << ", " << breadth << endl;
	}
	// Destructor
	
	// Destructor takes the first value first
	// i.e. takes the value which is at the end
	~Rectangle()
	{
		cout << length << ", " << breadth << endl;
	}
	int area()
    {
        return length * breadth;
    }
};

int main()
{
	Rectangle r[3] = {Rectangle(), Rectangle(4), Rectangle(2, 5)};
	cout << endl;
	cout << "Different areas of rectangle are: " << endl;
	for(int i = 0; i <= 2; i++)
	{
		cout << "Rectangle " << i+1 << ": " << r[i].area() << endl;
	}
	
	return 0;
}
