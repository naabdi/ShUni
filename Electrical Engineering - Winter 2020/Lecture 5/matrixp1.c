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
******************************************************
* Lecture 5 codes                                    *
* Date:4/18/2020                                     *
* Topics:                                            *
*       - Determining matrix                         *
*       - Initializing Matrix                        *
*       - Making a function to print matrix elements *
*       - Making a function to print whole matrix    *
******************************************************
*/
#include <stdio.h>
#include <stdlib.h>
//Determining matrix size
#define SIZE 3

void printElement(size_t ,int [][SIZE]);
void printMat(size_t ,int [][SIZE]);

int main()
{
    system("cls");
    //Initializing matrix
    int A[SIZE][SIZE] = {{5,4,7},{-1,3,9},{11,-2,8}};
    
    printElement(SIZE,A);
    puts("");
    
    printf("Matrix A is\n");
    printMat(SIZE,A);

    return 0;
}
//function for printing matrix element by element
void printElement(size_t msize,int inputMat[][msize])
{
    size_t r,c;
    for(r=0;r<msize;r++)
    {
        for(c=0;c<msize;c++)
        {
            printf("Element[%d][%d] = %d",r,c,inputMat[r][c]);
            puts("");
        }
    }
}

//print full Matrix
void printMat(size_t msize,int inputMat[][msize])
{
    size_t r,c;
    for(r=0;r<msize;r++)
    {
        for(c=0;c<msize;c++)
        {
            printf("%d\t",inputMat[r][c]);
        }
        puts("");
    } 
}