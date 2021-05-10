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
#include <conio.h>
int health;

int main() {
    srand(time(NULL));
int myNum = 1 + (rand()%1000);

bool gameState = true;
health = 10;

int yourNum;
while(gameState)
{

    int i;
    printf("Health: ");
    for(i=0;i<health;i++)
        printf("#");
    puts("");
    puts("Guess Number");
    scanf("%d",&yourNum);
    if (yourNum == myNum)
    {
        puts("Congratulations! You Win :((");
        gameState = false;
    }
    else if (yourNum > myNum)
    {
        --health;
        puts("Your guess is large, press Enter");
        printf("You have only %d tries",health);
        getch();
        system("cls");

    }

    else if (yourNum < myNum)
    {
        --health;
        puts("Your guess is small, press Enter");
        printf("You have only %d tries",health);
        getch();
        system("cls");

    }
    if (health == 0)
    {
        puts("AI Wins :))");
        printf("My Number was %d",myNum);
        gameState = false;
    }

}
}
