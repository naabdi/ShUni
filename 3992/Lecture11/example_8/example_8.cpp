#include "iostream"
#include "fstream"
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
    Student stuarr[2]{{"Leila",22,'F',"Computer Science",19.123},
    {"Ali",23,'M',"Electrical",18.123}};

    ofstream Myfile{"records.csv",ios::out};
    //for error handling
    if (!Myfile)
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }
    Myfile << "Name" << "," << "Age" << "," << "Gender"
    << "," << "Department"<< "," << "Grade" << endl;
    for(Student stu: stuarr)
    {
     Myfile << stu.name << "," << stu.age << "," << stu.gender
     << "," << stu.department << "," << stu.grade << endl;
    }

    Myfile.close();
}
