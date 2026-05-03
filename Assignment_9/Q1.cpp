#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream f;
	f.open("NUM.txt", ios::out); // to write
	
	for(int i = 1; i <= 200; i++)
	{
		f << i << " ";
	}
	
	return 0;
}
