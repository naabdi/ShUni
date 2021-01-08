//author: Nariman Abdi
//https://github.com/naabdi/
//Generate Random Numbers
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int i;

int main() {
    srand(time(NULL));
    //srand(1);
    for(i = 0;i<10;i++) 
    {
        printf("%d \t",1 + ( rand() % 6 ) );
    }
}