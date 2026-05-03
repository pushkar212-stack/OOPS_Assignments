#include <iostream>
using namespace std;

class Book
{
	protected:
		string title;
		string author;
		float price;
		
	public:
		void set(string t, string a, float p)
		{
			title = t; // purana = nya
			author = a;
			price = p;
		}
		void show()
		{
			cout << "Title: " << title << endl;
			cout << "Author: " << author << endl;
			cout << "Price: " << price << endl;
		}
};

class Textbook : public Book
{
	private:
		string subject;
	public:
		void sett(string t, string a, float p, string s)
		{
			set(t, a, p);
			subject = s;
		}
		void show_textbook()
		{
			show();
			cout << "Subject: " << subject << endl;
		}
};

int main()
{
	Book b;
	b.set("Mathematics-II", "R.D. Sharma", 900);
	cout << "Book details: " << endl;
	b.show();
	cout << endl;
	
	Textbook t;
	t.sett("DSA", "Alice Brown", 399, "CSE");
	cout << "Textbook Details: " << endl;;
	t.show_textbook();
	return 0;
}
