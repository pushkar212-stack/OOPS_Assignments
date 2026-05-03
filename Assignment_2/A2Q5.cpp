#include <iostream>
using namespace std;

class Complex
{
	private:
		float real;
		float imag;
	public:
		void setComplex(float r, float i)
		{
			real = r;
			imag = i;
		}
		void displayComplex()
		{
			cout << "Complex Number = " << real << " + i" << imag << endl;
		}
		Complex addComplex(Complex c)
		{
			Complex s;
			s.real = real + c.real;
			s.imag = imag + c.imag;
			return s;
		}
};

int main()
{
	Complex num1, num2, sum;
	
	num1.setComplex(25, 5);
	num2.setComplex(50, 89);
	
	cout << "First Complex Number: ";
    num1.displayComplex();

    cout << "Second Complex Number: ";
    num2.displayComplex();
    
	sum = num1.addComplex(num2);
	cout << "Sum of Complex Numbers: ";
    sum.displayComplex();
	
	return 0;
}
