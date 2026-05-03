#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "Hello\nWorld" << endl; // n = change line
    cout << "Hello\tWorld" << endl; // t = tab
    cout << "Hello\bWorld" << endl; // b = omit 2 places when in center
    cout << setw(9) << "C++" << setw(9) << "Program" << endl; // setw = set width function between two words!
	cout << setw(9) << "C+" << setw(9) << "Program" << endl;
	
    return 0;
}

