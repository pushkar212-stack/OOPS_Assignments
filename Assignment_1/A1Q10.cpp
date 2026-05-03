#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Using If-Else loop:" << endl;
	if (n == 0)
	{
		cout << "Its neither an odd nor an even number!";
	}
	else if (n % 2 == 0)
	{
		cout << "Its an even number!" << endl;
	}
	else
	{
		cout << "Its an odd Number!" << endl;
	}
	cout << "\n";
	cout << "Using conditional operator: " << endl;
	cout << (n % 2 == 0 ? "Its an even number!": "Its an odd number!");
	return 0;
}
