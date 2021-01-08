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

void bubblesort (int [],int);

#define SIZE 35

int main()
{
    int studentScores[SIZE] = {18,15,20,18,17,16,15,10,8,12,18,20,20,11,17,9,12,
    15,14,13,17,16,15,9,16,17,14,18,17,12,19,19,18,12,11};

    printf("Unsorted Array\n");
    size_t i;
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",studentScores[i]);
    }
    puts("");
    printf("Sorted Array\n");

    bubblesort(studentScores,SIZE);
    for(i=0;i<SIZE;i++)
    {
        printf("%d ",studentScores[i]);
    }


}

void bubblesort(int array[],int asize)
{
    int i, j, temp;
    for (i=1;i <= asize-1;i++)
    {
        for(j=0;j <= asize-2;j++)
        {
            temp = array[j+1];
            if (array[j] > array[j+1])
            {
                array[j+1] = array[j];
                array[j] = temp;
            }
        }
    }

}
