#include <iostream>
using namespace std;

class Speedometer
{
	protected:
		int speed;
		
	public:
		void set_speed(int s)
		{
			speed = s; // purana = nya
		}
		void show_speed()
		{
			cout << "Speed: " << speed << " km/h" << endl;
		}
};

class FuelGuage
{
	protected:
		float fuel;
		
	public:
		void set_fuel(float f)
		{
			fuel = f;
		}
		void show_fuel()
		{
			cout << "Fuel Level: " << fuel << " liters" << endl;
		}
};

class Thermometer
{
protected:
    float temperature;

public:
    void set_temp(float t)
    {
        temperature = t;
    }

    void show_temp()
    {
        cout << "Temperature: " << temperature << " Degree Celcius" << endl;
    }
};

class Dashboard : public Speedometer, public FuelGuage, public Thermometer
{		
	public:
		void display()
		{
			cout << "Showing all the details: " << endl;
			show_speed();
			show_fuel();
			show_temp();
		}
};

int main()
{
	Dashboard d1;
	Dashboard d2;
	cout << "Dashboard of first car: " << endl;
	d1.set_speed(50);
    d1.set_fuel(40.2);
    d1.set_temp(90.0);
    d1.display();
    cout << endl;
    cout << "Dashboard of second car: " << endl;
    d2.set_speed(90);
    d2.set_fuel(59.5);
    d2.set_temp(100.00);
    d2.display();
    return 0;
}
