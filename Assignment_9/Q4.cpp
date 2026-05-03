#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
	char str [100];
	cout << "Enter string: " << endl;
	cin.getline(str, 100);
	
	cout << "Length: " << strlen(str) << endl;
	
	fstream file;
	
	file.open("data.txt", ios::out);
    if(!file) {
        cout << "File error!";
        return 1;
    }
    file << str;
    file.close();

    // Read from file
    file.open("data.txt", ios::in);
    file.getline(str, 100);

    cout << "From file: " << str;

    file.close();
	return 0;
}
