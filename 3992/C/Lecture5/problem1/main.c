/*
***********************************************
* Author: Nariman Abdi                        *
* https://github.com/naabdi                   *
* University of Isfahan (Shahreza Branch)     *
* Computer Programming Course                 *
***********************************************
*/
/*
******************************************************
* Lecture 5 codes                                    *                                     *
* Topics:                                            *
*       - Basics                                     *
******************************************************
*/

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    //calculate sum
    int sum;
    sum = num1 + num2 + num3;

    //calculate average
    int average;
    average = sum / 3;
    printf("The average of %d, %d and %d is %d\n", num1, num2, num3, average);

    //find maximum
    int max_num;
    max_num = num1;
    if (max_num < num2) max_num = num2;
    if (max_num < num3) max_num = num3;
    printf("The maximum of %d, %d and %d is %d\n", num1, num2, num3, max_num);

    //find minimum
    int min_num;
    min_num = num1;
    if (min_num > num2) min_num = num2;
    if (min_num > num3) min_num = num3;
    printf("The minimum of %d, %d and %d is %d\n", num1, num2, num3, min_num);

    return 0;
}
