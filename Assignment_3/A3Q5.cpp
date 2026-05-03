//Write a program using Array of Objects to display area of multiple rectangles
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
        length = l;
        width = w;
    }

    float calculateArea()
    {
        return length * width;
    }

    void display()
    {
        cout << "Length = " << length 
             << ", Width = " << width 
             << ", Area = " << calculateArea() << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of rectangles: ";
    cin >> n;

    Rectangle rect[n];

    for(int i = 0; i < n; i++)
    {
        float l, w;
        cout << "\nEnter length and width of rectangle " << i + 1 << ": ";
        cin >> l >> w;

        rect[i].setData(l, w);
    }

    cout << "\nRectangle Areas: \n";
    for(int i = 0; i < n; i++)
    {
        rect[i].display();
    }

    return 0;
}

