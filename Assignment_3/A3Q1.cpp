#include <iostream>
using namespace std;

class Rectangle
{
	private:
		float length;
		float width;
	public:
		void setData(float l, float w)
		{
			this->length = l;
			this->width = w;
		}
		void getData()
		{
			cout << "Enter height: ";
        	cin >> length;
        	cout << "Enter width: ";
        	cin >> width;
		}
		void show()
		{
			cout << "Length = " << this->length << endl;
        	cout << "Width  = " << this->width << endl;
		}
		void calculateArea()
		{
			float area = length * width;
			cout << "Area = " << area << endl;
		}
};

int main()
{
	Rectangle r1;
	r1.setData(8, 6);
	r1.show();
	r1.calculateArea();
	
	Rectangle r2;
	Rectangle* ptr;
	ptr = &r2;
	ptr->getData();
	ptr->show();
	ptr->calculateArea();
	
	Rectangle r3;
	
	r3.getData();
	r3.show();
	r3.calculateArea();
	return 0;
}
