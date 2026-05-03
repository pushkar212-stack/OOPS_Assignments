#include <iostream>
using namespace std;

class Rectangle
{
	private:
		float length;
		float width;
	public:
		void getData()
		{
			cout << "Enter height: ";
        	cin >> length;
        	cout << "Enter width: ";
        	cin >> width;
		}
		void calculateArea()
		{
			float area = length * width;
			cout << "Area = " << area << endl;
		}
};

int main()
{
	Rectangle r1, r2;
	
	r1.getData();
	r1.calculateArea();
	
	r2.getData();
	r2.calculateArea();
	
	return 0;
}
