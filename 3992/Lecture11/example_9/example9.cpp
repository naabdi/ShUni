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
#include "fstream"
#include "sstream"
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
    Student stuarr[2];
    Student temp;
    ifstream Myfile{"records.csv",ios::in};
    //for error handling
    if (!Myfile)
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }
    string tt;
    int index;
    while (getline (Myfile, tt))
    {
        istringstream linestream(tt);
        if(tt != "Name,Age,Gender,Department,Grade")//skip first line
        {
            string item;
            //use this to get up to the first comma
            getline(linestream, item, ',');
            temp.name = item;
            getline(linestream, item, ',');
            stringstream sInt(item);
            sInt >> temp.age;
            getline(linestream, item, ',');
            stringstream sChar(item);
            sChar >> temp.gender;
            getline(linestream, item, ',');
            temp.department = item;
            getline(linestream, item, ',');
            stringstream sFloat(item);
            sFloat >> temp.grade;
            stuarr[index] = temp;
            index++;
        }

    }

    for(Student stu: stuarr)
    {
     cout << stu.name << "," << stu.age << "," << stu.gender
     << "," << stu.department << "," << setprecision(4) << stu.grade << endl;
    }

    Myfile.close();
}
