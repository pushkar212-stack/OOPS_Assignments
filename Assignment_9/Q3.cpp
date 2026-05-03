#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream fin, fout;
	
	fin.open("source.txt", ios::in);
	fout.open("dest.txt", ios::out);
	char ch;
	
	while(fin.get(ch))
	{
		fout.put(ch);
	}
	fin.close();
	fout.close();
	return 0;
}
