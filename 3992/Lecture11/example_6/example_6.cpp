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
#include "fstream"
using namespace std;

int main()
{
    ofstream Myfile{"test.txt"};
    //for error handling
    if (!Myfile)
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    Myfile << "Name" << "," << "Age" << "," << "Gender"
    << "," << "Department"<< "," << "Grade" << endl;

    Myfile.close();
}
