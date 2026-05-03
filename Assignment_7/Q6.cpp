#include <iostream>
#include <cstring>
using namespace std;

class STRING {
    char str[100];
	public:
	    STRING(char s[]){
			strcpy(str,s);
		}
	
	    bool operator==(STRING s){
	        return strcmp(str,s.str)==0;
	    }
	
	    STRING operator+(STRING s){
	        STRING temp("");
	        strcpy(temp.str,str);
	        strcat(temp.str,s.str);
	        return temp;
	    }
	
	    void show(){
			cout<<str<<endl;
		}
};

int main(){
    STRING s1("Hello"), s2("World"), s3("");
    s3 = s1 + s2;
    s3.show();

    if(s1==s2)
		cout<<"Equal";
	else
		cout<<"Not Equal";
	return 0;
}
