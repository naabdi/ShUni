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
******************************************************
* Lecture 6 codes                                    *
* Date:6/6/2020                                      *
* Topics:                                            *
*       - sizeof(), strlen() and gets() functions    *
******************************************************
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char color[50] = {};

    gets(color);

    printf("size of string array is %d\n", sizeof(color));

    printf("length of string is %d\n", strlen(color));

    printf("%s\n", color);

    //show characters according to the string size
    puts("The characters are:");
    size_t i;
    for(i = 0; i<sizeof(color);++i)
        printf("%d ", color[i]);

    //show characters according to the string length
    puts("The characters are");
    for(i = 0; i<strlen(color);++i)
        printf("%d ", color[i]);

}
