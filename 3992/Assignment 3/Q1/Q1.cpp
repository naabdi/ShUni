/*
******************************
* Author: Nariman Abdi       *
* https://github.com/naabdi  *
* University of Isfahan      *
* Computer Programming Course*
******************************
*/
/*
********************************************************
* Assignments 3 problem 1 solution                     *
* Date:6/17/2021                                       *
********************************************************
*/
#include "iostream"
using namespace std;

int main()
{
    cout << "N\t" << "5*N\t" << "10*N\t" << "15*N\t" << endl;
    for (unsigned int j = 1; j <=12 ; j++)
        {
            for (unsigned int i = 1; i < 5;i++)
            {
                (i==1) ? cout << j << "\t" : cout << 5*(i-1)*j << "\t";
            }
            cout << endl;
        }

}
