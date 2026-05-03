#include <iostream>
#include <fstream>
using namespace std;

void count_Alphabets()
{
	fstream file;
	file.open("NOTES.txt", ios::in); // to read
	
	char ch;
	int count = 0;
	
	while(file.get(ch))
	{
		if(isalpha(ch))
		{
			count++;
		}
	}
	cout <<  "Total alphabets are: " << count << endl;
	file.close();
}
int main()
{
	count_Alphabets();
	// Here alphabets means alphabets
	// No priority to numbers or special characters
	
	return 0;
}

