#include <iostream>
using namespace std;
class N2;
class N1
{
	private:
		float num1;
	public:
		N1(float n1)
		{
			num1 = n1;
		}
		void display()
	    {
	        cout << "N1 num1= " << num1 << endl;
	    }
	    friend void addData(N1 &, N2 &);
};

class N2
{
	private:
		float num2;
	public:
		N2(float n2)
		{
			num2 = n2;
		}
		void display()
	    {
	        cout << "N2 num2= " << num2 << endl;
	    }
	    friend void addData(N1 &, N2 &);
};

void addData(N1 &o1, N2 &o2)
{
    float sum = o1.num1 + o2.num2;
    cout << "\nSum of data members = " << sum << endl;
}
int main()
{
	N1 n1(8);
	N2 n2(5);
	
    n1.display();
    n2.display();

    addData(n1, n2);
	return 0;
}
