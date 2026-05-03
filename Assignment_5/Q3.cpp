#include <iostream>
using namespace std;

class Base
{
	public:
		int a;
	protected:
		int b;
};

class pub_d: public Base
{
	public:
		void set(int x, int y)
		{
			a = x;
			b = y;
		}
		void show()
		{
			cout << "Public Inheritance = " << a << ", " << b << endl;
		}
};

class prot_d : protected Base
{
	public:
		void show()
		{
			a = 10;
			b = 20;
			cout << "Protected Inheritance = " << a << ", " << b << endl;
		}
};

class pri_d : private Base
{
	public:
	    void show()
	    {
	        a = 50;
	        b = 60;
	        cout << "Private Inheritance: " << a << ", " << b << endl;
	    }
};

int main()
{
	pub_d p;
	p.a = 5;   // Allotment of values allowed
    p.show();

    prot_d pr;
    // Allotment of values not allowed
    pr.show();

    pri_d pv;
    // Allotment of values not allowed
    pv.show();

	
	return 0;
}
