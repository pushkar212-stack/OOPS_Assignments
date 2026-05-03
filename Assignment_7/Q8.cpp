#include <iostream>
using namespace std;

class Array {
    int a[5];
public:
    Array(){
		for(int i=0;i<5;i++) a[i]=i;
	}

    int operator[](int i){
        if(i>=5){
			cout<<"Out of bounds\n";
			return -1;
		}
        return a[i];
    }
};

int main()
{
    Array arr;
    cout<<arr[2]<<endl;
    cout<<arr[10]<<endl;
    return 0;
}
