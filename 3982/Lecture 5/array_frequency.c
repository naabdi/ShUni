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
#include <stdlib.h>

#define SIZE 35
#define MAX_SCORE 20

int main()
{
    system("cls");

    int freq[MAX_SCORE+1] = {0};

    int studentScores[SIZE] = {18,15,20,18,17,16,15,10,8,12,18,20,20,11,17,9,12,
    15,14,13,17,16,15,9,16,17,14,18,17,12,19,19,18,12,11};

    size_t j;

    for(j=0;j<SIZE;j++)
    {
        ++freq[studentScores[j]];
    }

    printf("Student Score\tFrequency\n");

    for(j=0;j<MAX_SCORE+1;j++)
    {
        printf("%d\t\t%d\n",j,freq[j]);
    }

    return 0;    
}