#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair
{
    T1 a;
    T2 b;

	public:
	    Pair(T1 x, T2 y)
		{
	        a = x;
	        b = y;
	    }
	
	    void display()
		{
	        cout << "Values: " << a << " , " << b << endl;
	    }
};

int main()
{
    Pair<int, float> p(10, 3.14);
    p.display();
    return 0;
}
