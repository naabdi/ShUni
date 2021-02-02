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
* Assignments 2 problem 5 solution                     *
* Date:5/16/2020                                       *
********************************************************
*/
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(NULL));
int myNum = 1 + (rand()%1000);

bool gameState = true;

puts("Guess Number");
int yourNum;
while(gameState)
{
    scanf("%d",&yourNum);
    if (yourNum == myNum)
    {
        printf("Congratulations! my number is %d You Win",myNum);
        gameState = false;
    }
    else if (yourNum > myNum)
        puts("Your guess is large");
    else if (yourNum < myNum)
        puts("Your guess is small");
}
}
