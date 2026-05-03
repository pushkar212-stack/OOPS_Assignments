#include <iostream>
using namespace std;

template <typename T>
class Array
{
    T arr[100];
    int size;

	public:
	    void input()
		{
	        cout << "Enter size: ";
	        cin >> size;
	        cout << "Enter elements:\n";
	        for (int i = 0; i < size; i++)
	            cin >> arr[i];
	    }
	
	    void display()
		{
	        cout << "Array elements: ";
	        for (int i = 0; i < size; i++)
	            cout << arr[i] << " ";
	        cout << endl;
	    }
};

int main()
{
    Array<int> a;
    a.input();
    a.display();
    return 0;
}
