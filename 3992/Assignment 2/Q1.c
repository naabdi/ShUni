/*
***********************************************
* Author: Nariman Abdi                        *
* https://github.com/naabdi                   *
* University of Isfahan (Shahreza Branch)     *
* Computer Programming Course                 *
***********************************************
*/
/*
******************
* Assignments 2  *
* Date:5/10/2021 *
******************
*/
#include <stdio.h>
int i;
float pi = 0;
int iteration;
int main()
{
   printf("Iteration Number \t         Approximation of pi \n");
   for (iteration = 10;iteration <= 1000000;iteration = iteration*10)
   {
       pi = 0;
       for (i = 1;i<=iteration;i++)
   {
       if (i%2 != 0)
       {
           pi = pi + (float)4/(2*i-1);


       }
       if (i%2 == 0)
       {
           pi = pi - (float)4/(2*i-1);

       }
       }
       printf("%7d \t\t\t %.15f \n",iteration,pi);
   }
}
