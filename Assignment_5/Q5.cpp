#include <iostream>
using namespace std;

class Base
{
	public:
		Base()
		{
			cout << "Base Constructor!" << endl;
		}
		~Base()
		{
			cout << "Base Destructor!" << endl;
		}
};
class Derived : public Base
{
public:
    Derived()
    {
        cout << "Derived Constructor!!" << endl;
    }

    ~Derived()
    {
        cout << "Derived Destructor!!" << endl;
    }
};

int main()
{
    Derived d;
	//Destructor runs according to priority
	// The one on first will become destructor first
	// Works on first come first serve basis
    return 0;
}
