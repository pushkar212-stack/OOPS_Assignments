#include <iostream>
using namespace std;

int main()
{
    int days;
    cout << "By how many days are you late: ";
    cin >> days;

    if (days <= 5)
    {
    	cout << "Fine: 50 paise!";
	}
    else if (days <= 10)
    {
    	cout << "Fine: 1 rupee!";
	}
    else if (days <= 30)
    {
    	cout << "Fine: 5 rupees!";
	}
    else
    {
    	cout << "Your membership is cancelled!!";
	}
	
    return 0;
}

