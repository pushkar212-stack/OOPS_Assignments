#include <iostream>
#include <cmath>
using namespace std;

float area(float b, float h){
	return 0.5*b*h;
} // right

float area(float a){
	return (sqrt(3)/4)*a*a;
} // equilateral

float area(float a, float b, float c){ // isosceles
    float s = (a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main(){
    cout<<"Right: "<<area(4,5)<<endl;
    cout<<"Equilateral: "<<area(3)<<endl;
    cout<<"Isosceles: "<<area(5,5,6)<<endl;
    return 0;
}
