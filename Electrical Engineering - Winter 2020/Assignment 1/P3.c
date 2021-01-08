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
* Assignments 1 problem 3 solution                     *
* Date:5/16/2020                                       *
********************************************************
*/
#include <stdio.h>

int main()
{
    int a,b,c;
    puts("Enter Number #1");
    scanf("%d",&a);

    puts("Enter Number #2");
    scanf("%d",&b);

    puts("Enter Number #3");
    scanf("%d",&c);

    printf("%d + %d + %d = %d\n",a,b,c,a+b+c);

    printf("(%d + %d + %d)/3 = %2.2f\n",a,b,c,(float)(a+b+c)/3);

    printf("%d * %d * %d = %d\n",a,b,c,a*b*c);

    printf("Max %d, %d and %d is %d\n",a,b,c,a>b ? (a>c ? a : c) : b>c ? b : c);

    printf("Min %d, %d and %d is %d\n",a,b,c,a<b ? (a<c ? a : c) : b<c ? b : c);
}
