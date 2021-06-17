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
* Assignments 3 problem 2 solution                     *
* Date:6/17/2021                                       *
********************************************************
*/
#include "iostream"
using namespace std;

int power(int , int );

int main()
{
    cout << "5^7 = " << power(5,7) << endl;
}

int power(int b, int a)
{
    if (a==1)
        return b;
    else
        return b*power(b,a-1);
}
