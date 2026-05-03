#include <iostream>
using namespace std;

template <typename T>
void process(T a)
{
    cout << "Single parameter: " << a << endl;
}

template <typename T>
void process(T a, T b)
{
    cout << "Same type: " << a << ", " << b << endl;
}

template <typename T, typename U> //here type indicates the data types
void process(T a, U b)
{
    cout << "Different types: " << a << ", " << b << endl;
}

int main()
{
    process(5);
    process(10, 20);
    process(10, 20.25);
    process(5, 3.14);
    process(10.25, 20);
	process(5522, 54);
    return 0;
}
