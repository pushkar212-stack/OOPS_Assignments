#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream file;
	file.open("data.txt", ios::out);
	
	cout << "Hello" << endl;
	cout << "This is an C++ programming file." << endl;
	cout << "Hope you understand it easily, hahahahaha" << endl;
	file.close();
	
	file.open("data.txt", ios::in);
	
	file.seekg(10);
	cout << "Position: " << file.tellg() << endl;
	
	char ch;
	while(file.get(ch))
	{
		cout << ch;
	}
	file.close();
	
	return 0;
}
