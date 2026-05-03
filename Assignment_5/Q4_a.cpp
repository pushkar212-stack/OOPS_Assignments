// Single Inheritance
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "This is Base class\n";
    }
};

class Derived : public Base
{
public:
    void display()
    {
        cout << "This is Derived class\n";
    }
};

int main()
{
    Derived d;
    d.show();
    d.display();
    return 0;
}
