#include <iostream>
using namespace std;

class LibraryUser
{
	protected:
		string name;
		int ID;
		string contact;
		
	public:
		void set(string n, int i, string c)
		{
			name = n; // purana = nya
			ID = i;
			contact = c;
		}
		void show()
		{
			cout << "Name: " << name << endl;
			cout << "ID: " << ID << endl;
			cout << "Contact: " << contact << endl;
		}
};

class Student : public LibraryUser
{
	private:
		string grade;
	public:
		void set_stu(string n, int i, string c, string g)
		{
			set(n, i, c);
			grade = g;
		}
		void show_stu()
		{
			cout << "------- Student Details -------\n";
			show();
			cout << "Grade: " << grade << endl;
		}
};

class Teacher : public LibraryUser
{
	private:
		string department;
	public:
		void set_teacher(string n, int i, string c, string d)
		{
			set(n, i, c);
			department = d;
		}
		void show_teacher()
		{
			cout << "\n------- Teacher Details -------\n";
			show();
			cout << "Department: " << department << endl;
		}
};

int main()
{
	Student s;
	Teacher t;
	s.set_stu("Pushkar Parashar", 323, "9485468405", "B.E. 2nd year");
	s.show_stu();
	cout << endl;
	
	t.set_teacher("Robin Singla", 100, "9825451256", "ECE");
	t.show_teacher();
	return 0;
}
