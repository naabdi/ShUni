/*
******************************
* Author: Nariman Abdi       *
* https://github.com/naabdi  *
* University of Shahreza     *
* Computer Programming Course*
* Electrical Engineering     *
******************************
*/

#include <stdio.h>
#define SIZE 10

int main()
{
    int myArray[SIZE] = {15,16,17,18,19,12,13,14,15,16};

    int i;
    int total = 0;
    for (i = 0;i<SIZE;i++)
    {
        printf("myArray[%d] = %d\n",i,myArray[i]);
        total += myArray[i];
    }
    printf("The sum of all array elements is %d",total);
}