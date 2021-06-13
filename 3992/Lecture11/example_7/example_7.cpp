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
using namespace std;

int main()
{
    ifstream Myfile{"readme.txt",ios::in};
    //for error handling
    if (!Myfile)
    {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    string item;
    while (getline (Myfile, item))
    {
        cout << item << endl;
    }

    Myfile.close();
}
