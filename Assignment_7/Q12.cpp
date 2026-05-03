#include <iostream>
using namespace std;

class Test
{
    float x;
	public:
	    Test(float f)
		{
			x = f;
		}
		operator float()
		{
			// conversion constructor
	        return x;
	    }
};

int main()
{
    Test t(7.8);

    float f;
    f = t; // object --> float

    cout << "Value: " << f << endl;

    return 0;
}
