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
void GetData(Student&);

int main()
{
    Student stuarr[2];
    for(Student& stu: stuarr)
    {
        GetData(stu);
    }
    cout << "Name" << "," << "Age" << "," << "Gender"
    << "," << "Department"<< "," << "Grade" << endl;

    for(Student stu: stuarr)
    {
     cout << stu.name << "," << stu.age << "," << stu.gender
     << "," << stu.department << "," << setprecision(4) << stu.grade << endl;
    }


}

void GetData(Student& item)
{
        cout << "Enter student name: ";
        getline(cin, item.name);
        cout << "Enter his/her age: ";
        cin >> item.age;
        cout << "Enter his/her gender: ";
        cin >> item.gender;
        cout << "Enter his/her department: ";
        cin.ignore();
        getline(cin, item.department);
        cout << "Enter his/her grade: ";
        cin >> item.grade;
        cin.ignore();
}
