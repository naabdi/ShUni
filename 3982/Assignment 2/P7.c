/*
******************************
* Author: Nariman Abdi       *
* https://github.com/naabdi  *
* University of Shahreza     *
* Computer Programming Course*
* Electrical Engineering     *
******************************
*/
/*
********************************************************
* Assignments 2 problem 7 solution                     *
* Date:5/16/2020                                       *
********************************************************
*/

#include <stdio.h>
int pow(int , int );

int main() {
printf("%d",power(5,10));
}

int power(int b, int a)
{
    if (a==1)
        return b;
    else
        return b*power(b,a-1);
}
