#include <iostream>
using namespace std;

class Shape
{
	public:
    	virtual void area() = 0;
    	virtual void display() = 0;
};

class Circle : public Shape
{
    float r;
	public:
    	Circle(float r){
			this->r = r;
		}
    	void area(){
			cout << "Area: " << 3.14*r*r << endl;
		}
    	void display(){
			cout << "Circle\n"; 
		}
};

class Rectangle : public Shape
{
    int l,b;
	public:
    	Rectangle(int l,int b){
			this->l=l;
			this->b=b;
		}
    	void area(){
			cout<<"Area: "<<l*b<<endl;
		}
    	void display(){
			cout<<"Rectangle\n";
		}
};

class Triangle : public Shape
{
    int b,h;
	public:
    	Triangle(int b,int h){
			this->b=b;
			this->h=h;
		}
    	void area(){
			cout<<"Area: "<<0.5*b*h<<endl;
		}
    	void display(){
			cout<<"Triangle\n";
		}
};

int main()
{
    Shape *s;
    Circle c(3); Rectangle r(4,5); Triangle t(4,6);

    s=&c; s->display(); s->area();
    s=&r; s->display(); s->area();
    s=&t; s->display(); s->area();
    return 0;
}
