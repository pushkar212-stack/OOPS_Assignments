#include <iostream>
using namespace std;

class Book
{
	protected:
		string title;
		string author;
		string ISBN;
	public:
		void set(string t, string a, string i)
		{
			title = t;
			author = a;
			ISBN = i;
		}
		string getISBN() // made this extra because we can't openly reveal the ISBN ID
    	{
    	    return ISBN;
    	}
		void show()
		{
			cout << "Title: " << title << endl;
			cout << "Author: " << author << endl;
			cout << "ISBN number: " << ISBN << endl;
			cout << "------------------------" << endl;
		}
};

class Library
{
	private:
		Book books[150];
		int count;
	public:
		Library()
		{
			count = 0;
		}
		bool addNewBook(string &title, string &author, string &ISBN)
		{
			if(count >= 150)
				return false;
			books[count].set(title, author, ISBN);
			count++;
			return true;
		}
		bool removeBooks(string &ISBN);
		void displayDetails()
		{
			if(count == 0)
			{
				cout << "No books available!" << endl;
				return;
			}
			for (int i = 0; i < count; i++)
			{
				books[i].show();
			}
		}
};

bool Library::removeBooks(string &ISBN)
{
	for (int i = 0; i < count; i++)
	{
		if(books[i].getISBN() == ISBN)
		{
			for (int j = i; j < count-1; j++)
			{
				books[j] = books[j+1];
				//present book jab remove hui tab uski jagah agli walli book legi
				//bas wahi cocept lgaya h ki next walle ka index decrease hua
			}
			count--;
			return true;
		}
	}
	return false;
}
int main()
{
	Library lib;
	string t1 = "C++ Basics", a1 = "Bjarne Stroustrup", i1 = "101";
    string t2 = "OOP Concepts", a2 = "Robert Lafore", i2 = "102";
    string t3 = "Data Structures", a3 = "Mark Allen Weiss", i3 = "103";
    string t4 = "Algorithms", a4 = "Thomas Cormen", i4 = "104";
    string t5 = "Operating Systems", a5 = "Galvin", i5 = "105";
    
    lib.addNewBook(t1, a1, i1);
	lib.addNewBook(t2, a2, i2);
	lib.addNewBook(t3, a3, i3);
	lib.addNewBook(t4, a4, i4);
	lib.addNewBook(t5, a5, i5);
	cout << "\nBooks Present in the library: " << endl;
	cout << endl;
	lib.displayDetails();
	
	cout << "\nRemoving book with ISBN 104" << endl;
	if(lib.removeBooks(i4))
	{
		cout << "Book removed successfully!" << endl;
	}
	else
	{
		cout << "Book not available" << endl;
	}
	cout << "Now, the books present in library: " << endl;
	cout << endl;
	lib.displayDetails();
	
	return 0;
}
