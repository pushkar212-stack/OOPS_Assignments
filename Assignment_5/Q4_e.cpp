// Hybrid Inheritance
#include <iostream>
using namespace std;

class A
{
public:
    void showA()
    {
        cout << "Class A\n";
    }
};

class B : public A
{
};

class C : public A
{
};

class D : public B, public C
{
};

int main()
{
    D obj;
    // obj.showA(); ambiguity occured (diamond problem)
	// Here, D gets 2 classes of same A, that's why error occured!!
    return 0;
}
