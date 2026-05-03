#include <iostream>
using namespace std;

class Rectangle
{
	public:
		int a;
		
	Rectangle()
	{
		int a = 0;
		cout << "Constructor called!" << endl;
	}
	Rectangle(int n)
	{
		a = n;
		cout << "Parameterized Constructor called!" << endl;
	}
	void display()
	{
		cout << "Value: " << a << endl;
	}
    ~Rectangle()
	{
		cout << "Destructor called, now value is: "  << a << endl;
	}
};

int main()
{
	// Integer
	int *p = new int;
	*p = 10;
	cout << "Integer value: " << *p << endl;
	delete p;
	
	// Float
	float *q = new float;
	*q = 10;
	cout << "Float value: " << *q << endl;
	delete q;
	cout << endl;
	// Integer Array
	int *arr = new int[3];
	for (int i = 0; i < 3; i++)
	{
		arr[i] = i+1;
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
	delete[] arr;
	cout << endl;
	// Float Array
	float *farr = new float[3];
	for (int i = 0; i < 3; i++)
	{
		farr[i] = i+1;
		cout << "arr[" << i << "] = " << farr[i] << endl;
	}
	delete[] farr;
	cout << endl;
	// Single object
	Rectangle *r1 = new Rectangle(100);
	r1->display();
	delete r1;
	cout << endl;
	// Array of objects
	Rectangle *oarr = new Rectangle[3];
	for (int i = 0; i < 3; i++)
	{
		oarr[i].a = i;
		oarr[i].display();
	}
	delete[] oarr;
	return 0;
}
