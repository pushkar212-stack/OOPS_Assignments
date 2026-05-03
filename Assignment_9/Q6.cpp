#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream file;
    file.open("Hello.txt", ios::in | ios::out | ios::trunc);
    
    string str = "Hello World";
    
    for(int i = 0; i <str.length(); i++)
    {
    	file.put(str[i]);
    	cout << "Position: " << file.tellp() << endl;
	}
	
    file.seekp(6); // pointer moved to position 6 i.e. 'W'
    file << "C++  "; // double spaced
    // We are overwitting, so to neglect the 2 spaces of world,we put 2 spaces
    // World --> C++__
    
    file.seekg(0); // written to get back to the front
    //taki aap apna raasta na bhul pao aur vapis ghar aa jao
    char ch;
    while(file.get(ch))
    	cout << ch;
    file.close();
    return 0;
}
