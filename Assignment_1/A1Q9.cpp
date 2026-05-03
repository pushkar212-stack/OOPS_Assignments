#include <iostream>
using namespace std;

int main()
{
    int choice;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add, 2.Subtract, 3.Multiply, 4.Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1: cout << "Result: " << a + b; break;
        case 2: cout << "Result: " << a - b; break;
        case 3: cout << "Result: " << a * b; break;
        case 4: cout << "Result: " << a / b; break;
        default: cout << "Invalid choice";
    }

    return 0;
}

