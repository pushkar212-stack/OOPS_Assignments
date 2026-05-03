#include <iostream>
using namespace std;
class R2;
class R1
{
	private:
		float length;
	public:
		R1(float l)
		{
			length = l;
		}
		void display()
	    {
	        cout << "R1 Length: " << length << endl;
	    }
	    friend void swapData(R1 &o1, R2 &o2);
};

class R2
{
	private:
		float width;
	public:
		R2(float w)
		{
			width = w;
		}
		void display()
	    {
	        cout << "R2 Width: " << width << endl;
	    }
	    friend void swapData(R1 &o1, R2 &o2);
};

void swapData(R1 &o1, R2 &o2)
{
	float temp = o1.length;
	o1.length = o2.width;
	o2.width = temp;
}
int main()
{
	R1 r1(8);
	R2 r2(5);
	
	cout << "Before Swapping:" << endl;
    r1.display();
    r2.display();

    swapData(r1, r2);

    cout << "\nAfter Swapping:" << endl;
    r1.display();
    r2.display();
	return 0;
}
