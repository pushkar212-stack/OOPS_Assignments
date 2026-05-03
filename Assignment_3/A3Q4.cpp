#include <iostream>
using namespace std;

class B;

class A
{
	private:
		int x;
	public:
		A(int a)
		{
			this->x = a;
		}
		friend void sum(A, B);
};

class B
{
	private:
		int y;
	public:
		B(int b)
		{
			this->y = b;
		}
		friend void sum(A, B);
};

void sum(A obj1, B obj2)
{
	int result = obj1.x + obj2.y;
	cout << "Sum of A and B = " << result << endl;
}
int main()
{
	A obj1(1);
	B obj2(2);
	
	sum(obj1, obj2);
	
	return 0;
}
