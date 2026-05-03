// Hierarchical Inheritance
#include <iostream>
using namespace std;

class Base
{
public:
    void show()
    {
        cout << "Base class\n";
    }
};

class D1 : public Base
{
public:
    void show1()
    {
        cout << "Derived class 1\n";
    }
};

class D2 : public Base
{
public:
    void show2()
    {
        cout << "Derived class 2\n";
    }
};

int main()
{
    D1 obj1;
    obj1.show();
    obj1.show1();

    D2 obj2;
    obj2.show();
    obj2.show2();

    return 0;
}
