#include <iostream>
#include <cmath>
using namespace std;

class Polar;

class Cartesian
{
    float x, y;
	public:
	    Cartesian() {}
	
	    Cartesian(Polar p); // conversion constructor
	
	    void show()
		{
	        cout << "x = " << x << ", y = " << y << endl;
	    }
};

class Polar
{
	public:
	    float r, theta;
	
	    Polar(float r, float t) {
	        this->r = r;
	        this->theta = t;
	    }
};

// Polar --> Cartesian
Cartesian::Cartesian(Polar p) {
    x = p.r * cos(p.theta);
    y = p.r * sin(p.theta);
}

int main()
{
    Polar p(10, 3); // p(r, theta)

    Cartesian c;
    c = p; // means to convert polar into cartesian
    c.show();

    return 0;
}
