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
* Lecture 5 codes                                      *
* Date:4/25/2020                                       *
* Topics:                                              *
*       - Determining matrix size by user.             *
*       - Entering matrix elements by user.            *
*       - Define a function for these functionalities  *
*       - Summation of two matrices                    *
*       - Element by element production of two matrices*
********************************************************
*/


#include <stdio.h>
#include <stdlib.h>

#define SIZE 3
int matrix_size;//global variable

void printElement(size_t ,int [][matrix_size]);
void printMat(size_t ,int [][matrix_size]);
void sumMat(size_t ,int [][matrix_size],int [][matrix_size],int [][matrix_size]);
void prodMat(size_t ,int [][matrix_size],int [][matrix_size],int [][matrix_size]);
void getMat(size_t ,int [][matrix_size]);

int main()
{
    system("cls");
    //Determining matrix size by user.
    puts("Enter Matrix Size:");
    scanf("%u",&matrix_size);

    int A[matrix_size][matrix_size];
    int B[matrix_size][matrix_size];
    int C[matrix_size][matrix_size];

    puts("Enter Matrix A");
    getMat(matrix_size,A);

    puts("Enter Matrix B");
    getMat(matrix_size,B); 
    
    puts("Matrix A is");
    printMat(matrix_size,A);
    puts("");

    puts("Matrix B is");
    printMat(matrix_size,B);
    sumMat(matrix_size,A,B,C);
    puts("");

    puts("Matrix C = A+B");
    printMat(matrix_size,C);
    prodMat(matrix_size,A,B,C);
    puts("");

    puts("Matrix C = AB");
    printMat(matrix_size,C);

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

//sum of two matrices
void sumMat(size_t msize,int inputMat1[][msize],int inputMat2[][msize]
,int outputMat[][msize])
{
    size_t r,c;
    for(r=0;r<msize;r++)
    {
        for(c=0;c<msize;c++)
        {
            outputMat[r][c] = inputMat1[r][c] + inputMat2[r][c];
        }
    } 
}

//element product of two matrices
void prodMat(size_t msize,int inputMat1[][msize],int inputMat2[][msize]
,int outputMat[][msize])
{
    size_t r,c;
    for(r=0;r<msize;r++)
    {
        for(c=0;c<msize;c++)
        {
            outputMat[r][c] = inputMat1[r][c] * inputMat2[r][c];
        }
    } 
}


//Entering element function
void getMat(size_t msize,int outputMat[][msize])
{
    size_t r,c;
    for(r=0;r<msize;r++)
    {
        for(c=0;c<msize;c++)
        {
            printf("Enter element[%d][%d] = ",r,c);
            scanf("%d",&outputMat[r][c]);
        }
    } 
}