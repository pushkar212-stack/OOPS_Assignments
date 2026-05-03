#include <iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollNum;
		string degree;
		string branch;
		string hostel;
		float currentCG;
	public:
		void addDetails()
		{
			cout << "Enter Name: ";
        	getline (cin , name);
        	cout << "Enter Roll No: ";
        	cin >> rollNum;
        	cin.ignore();
			cout << "Enter Degree: ";
			getline (cin, degree);
			cout << "Enter branch: ";
			getline (cin, branch);
	        cout << "Enter Hostel: ";
        	getline(cin, hostel);
        	cout << "Enter Current CGPA: ";
        	cin >> currentCG;
		}
		void updateDetails()
		{
			cin.ignore();
			cout << "Enter updated degree: ";
        	cin >> degree;
		}
		void updateCGPA()
		{
			cin.ignore();
			cout << "Enter new CGPA: ";
        	cin >> currentCG;
		}
		void updateHostel()
		{
			cin.ignore();
			cout << "Enter new hostel: ";
        	getline(cin, hostel);
		}
		void updateBranch()
		{
			cout << "Enter new branch: ";
        	getline(cin, branch);
		}
		void displayDetails()
		{
			cout << "\n";
			cout << "Student Details are: " << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNum << endl;
        cout << "Degree: " << degree << endl;
        cout << "Branch: " << branch << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "Current CGPA: " << currentCG << endl;
		} 
};

int main()
{
	Student student;
	
	student.addDetails();
	student.displayDetails();

    student.updateCGPA();
    student.updateHostel();
    student.updateBranch();
    student.displayDetails();
	
	
	return 0;
}
