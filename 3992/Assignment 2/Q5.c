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
