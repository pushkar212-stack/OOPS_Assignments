#include <iostream>
using namespace std;

class Base
{
	protected:
		int x;
	public:
		void setP(int a)
		{
			x = a;
		}
};

class Derived : public Base
{
	public:
	    void showP()
	    {
	    	cout << "x = " << x << endl;
		}
};

int main()
{
    Derived d;
    d.setP(10);
    d.showP();

    return 0;
}
