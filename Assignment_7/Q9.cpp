#include <iostream>
using namespace std;

class Print {
public:
    void operator()(int n)
	{
        for(int i=0;i<n;i++)
        {
		    cout<<"Hello ";
		}
	}
};

int main(){
    Print p;
    p(3);
    return 0;
}
