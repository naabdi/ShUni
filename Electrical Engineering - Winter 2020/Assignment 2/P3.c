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
* Assignments 2 problem 3 solution                     *
* Date:5/16/2020                                       *
********************************************************
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int i;

int main() {
    srand(time(NULL));

    puts("10 Random Numbers between 100 and 1000");
    for(i = 0;i<10;i++)
    {
        printf("%d ",100+( rand() % 901 ) );
    }

    puts("");
    puts("10 Random Numbers between 0 and 19");
    for(i = 0;i<10;i++)
    {
        printf("%d ",( rand() % 20 ) );
    }

    puts("");
    puts("10 Random Numbers between 0 and 19");
    for(i = 0;i<10;i++)
    {
        printf("%d ",( rand() % 20 ) );
    }

    puts("");
    puts("10 Random Numbers between 0 and 19");
    for(i = 0;i<10;i++)
    {
        printf("%d ",1000+( rand() % 1223 ) );

    }
    puts("");
    puts("10 Random Numbers between 0 and 19");
    for(i = 0;i<10;i++)
    {
        printf("%d ",-2+( rand() % 15 ) );

    }
}
