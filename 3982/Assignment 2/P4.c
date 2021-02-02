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
* Assignments 2 problem 4 solution                     *
* Date:5/16/2020                                       *
********************************************************
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void root(float , float , float );

int main() {
    float a,b,c;
    puts("ax2 + bx + c");
    puts("Enter a = ");
    scanf("%f",&a);

    puts("Enter b = ");
    scanf("%f",&b);

    puts("Enter c = ");
    scanf("%f",&c);
    root(a,b,c);
}

void root(float a, float b, float c)
{
    float delta = b*b - 4*a*c;
    float root1,root2;
    if (delta < 0)
        printf("\nThere are no real answers");
    else if ( delta > 0)
    {
        root1 = (-b + sqrt(delta))/(2*a);
        root2 = (-b - sqrt(delta))/(2*a);
        printf("\nroot1 = %2.2f and root2 = %2.2f",root1,root2);
    }
    else if (delta == 0)
        printf("\nroot1 = root2 = %2.2f",(-b + sqrt(delta))/(2*a));


}
