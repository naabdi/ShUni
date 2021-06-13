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

    cout << "Name" << "," << "Age" << "," << "Gender"
    << "," << "Department"<< "," << "Grade" << endl;
    cout << stu1.name << "," << stu1.age << "," << stu1.gender
    << "," << stu1.department << "," << setprecision(4) << stu1.grade << endl;
}
