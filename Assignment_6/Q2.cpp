#include <iostream>
using namespace std;

class Book
{
	private:
		string title;
		string author;
		string ISBN;
	public:
		Book()
		{
			this->title = " ";
			this->author = " ";
			this->ISBN = " ";
		}
		Book(string title, string author, string ISBN)
		{
			this->title = title;
			this->author = author;
			this->ISBN = ISBN;
		}
		Book(const Book &b)
		{
			this->title = b.title;
			this->author = b.author;
			this->ISBN = b.ISBN;
		}
		string getISBN()
		{
			return this->ISBN;
		}
		void show()
		{
			cout << "Title: " << this->title << endl;
        	cout << "Author: " << this->author << endl;
    	    cout << "ISBN: " << this->ISBN << endl;
	        cout << "----------------------\n";
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
	        if (count >= 100)
	            return false;
	
	        books[count] = Book(title, author, ISBN); // constructor call
	        count++;
	        return true;
	    }
    	bool removeBooks(string &ISBN);
		void displayDetails()
	    {
	        if (count == 0)
	        {
	            cout << "No books available\n";
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
	string t1 = "C++", a1 = "Bjarne", i1 = "101";
    string t2 = "Java", a2 = "James", i2 = "102";
    string t3 = "Python", a3 = "Guido", i3 = "103";

    lib.addNewBook(t1, a1, i1);
    lib.addNewBook(t2, a2, i2);
    lib.addNewBook(t3, a3, i3);

	cout << "\nLibrary Books:" << endl;
    lib.displayDetails();

    cout << "\nRemoving ISBN 102...\n";
    lib.removeBooks(i2);

    cout << "\nAfter Removal:" << endl;
    lib.displayDetails();
    
    
    cout << "\nArray using Initializer List:\n";
    Book arr1[3] = 
	{
        Book("DSA", "Mark", "201"),
        Book("OS", "Galvin", "202"),
        Book("DBMS", "Korth", "203")
	};
	
    for (int i = 0; i < 3; i++)
    {
        arr1[i].show();
    }

    cout << "\nDynamic Array of Books:" << endl;

    int n = 2;
    Book *arr2 = new Book[n];

    arr2[0] = Book("AI", "Russell", "301");
    arr2[1] = Book("ML", "Tom Mitchell", "302");

    for (int i = 0; i < n; i++)
    {
        arr2[i].show();
    }
    delete[] arr2;
	return 0;
}
