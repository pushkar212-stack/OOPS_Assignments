#include <iostream>
using namespace std;

class Student {
public:
    virtual void display() = 0;
};

class Engineering : public Student {
public:
    void display(){ cout<<"Engineering\n"; }
};

class Medicine : public Student {
public:
    void display(){ cout<<"Medicine\n"; }
};

class Science : public Student {
public:
    void display(){ cout<<"Science\n"; }
};

int main(){
    Engineering e; Medicine m; Science sc;
	Student *s[3] = {&e, &m, &sc};
//    s[0]=&e; s[1]=&m; s[2]=&sc;

    for(int i=0;i<3;i++){
    	s[i]->display();
	}
	return 0;
}
