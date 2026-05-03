#include <iostream>
using namespace std;

class rectangle
{
	public:
		// 1) Constructor
		rectangle()
		{
			cout << "Constructor called!" << endl;
		}
		// 1) Destructor
		~rectangle()
		{
			cout << "Destructor called!" << endl;
		}
		/*
    	// 2) We can't have more than one destructor
	    ~rectangle()
	    {
	        cout << "2nd destructor" << endl;
	    }
	    
	    // 3) Destructor can't have parameter
	     ~rectangle(int x)
	    {
	        cout << "Destructor with parameter" << endl;
	    }
	    
		// 4) Destructor cannot return
	    int ~rectangle()
	    {
	        return 0;
	    }
	    */
};

int main()
{
	rectangle r1;
	
	cout << "Calling!" << endl;
	return 0;
}
