#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	
	file.open("test.txt", ios::in | ios::out | ios::trunc);
	
	for(char ch = 'A'; ch <= 'Z'; ch++)
	{
		file.put(ch);
	}
	
	// (a) 10th character
	file.seekg(9);
	cout << "10th char is: " << (char)file.get() << endl;
	
	// (b) overwrite 5th
	file.seekp(4);
	file.put('X');
	
	// (c) file size
	file.seekg(0, ios::end);
	cout << "Size: " << file.tellg() << endl;
	
	// (d) last character
	file.seekg(-1, ios::end);
	cout << "Last char is: " << (char)file.get();
	
	file.close();
	
	return 0;
}
