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
    stu1.name = "Ali";
    stu1.age = 24;
    stu1.gender = 'M';
    stu1.department = "Computer Science";
    stu1.grade = 18.325;

    cout << "Name" << "  " << "Age" << "  " << "Gender"
    << "  " << "Department";
    cout <<  setw(20) << "Grade" << endl;
    cout << setw(5) << left << stu1.name << setw(4) << right << stu1.age;
    cout << setw(5) << right << stu1.gender;
    cout << setw(21) << right << stu1.department;
    cout << setw(14) << setprecision(4) << right << stu1.grade << endl;
}
