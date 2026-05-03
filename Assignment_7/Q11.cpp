#include <iostream>
using namespace std;

class Test {
    float x;
public:
    Test(float f) // conversion constructor
	{
        x = f;
    }

    void show()
	{
        cout << "Value: " << x << endl;
    }
};

int main()
{
    float f = 5.5;

    Test t = f; // basic --> object
    t.show();

    return 0;
}
// conversion constructor: used to convert one type into an object
