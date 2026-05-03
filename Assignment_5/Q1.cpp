#include <iostream>
using namespace std;

class Base
{
	public:
	    int a;
	
	    void getA()
	    {
	        cout << "Enter value of a: ";
	        cin >> a;
	    }
	
	    void showA()
	    {
	        cout << "Value of a: " << a << endl;
	    }
};

class Derived : public Base
{
	public:
	    int b;
	
	    void getB()
	    {
	        cout << "Enter value of b: ";
	        cin >> b;
	    }
	
	    void showB()
	    {
	        cout << "Value of b: " << b << endl;
	    }
	
	    void sum()
	    {
	        cout << "Sum: " << a + b << endl;
	    }
};

int main()
{
    Base obj1; // ye sirf base class ke liye kaam krega
    obj1.getA();
    obj1.showA();

    cout << endl;

    Derived obj2; // aur ye derived class ke liye kaam krega
    obj2.getA();
    obj2.getB();
    obj2.showA();
    obj2.showB();
    obj2.sum();

    return 0;
}
