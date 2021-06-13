/*
***********************************************
* Author: Nariman Abdi                        *
* https://github.com/naabdi                   *
* University of Isfahan (Shahreza Branch)     *
* Computer Programming Course                 *
***********************************************
*/
/*
******************
* Lecture 11     *
* Date:1400/03/18*
******************
*/
#include "iostream"
#include "string"
#include "iomanip"

using namespace std;

struct Student
{
    string name;
	int age;
 	char gender;
	string department;
	float grade;
};

int main()
{
    Student stu1;
    cout << "Enter student name: ";
    getline(cin, stu1.name);
    cout << "Enter his/her age: ";
    cin >> stu1.age;
    cout << "Enter his/her gender: ";
    cin >> stu1.gender;
    cout << "Enter his/her department: ";
    cin.ignore();
    getline(cin, stu1.department);
    cout << "Enter his/her grade: ";
    cin >> stu1.grade;

    cout << "Name" << "," << "Age" << "," << "Gender"
    << "," << "Department"<< "," << "Grade" << endl;
    cout << stu1.name << "," << stu1.age << "," << stu1.gender
    << "," << stu1.department << "," << setprecision(4) << stu1.grade;
}
