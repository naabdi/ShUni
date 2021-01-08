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
*       - Character handling functions               *
******************************************************
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char inputChar;

    puts("Enter a character:");
    scanf("%c", &inputChar);

    if (isdigit(inputChar))
        printf("\"%c\" is a digit", inputChar);
    if(!isdigit(inputChar))
        printf("\"%c\" is not a digit", inputChar);

    puts("");

    if (isalpha(inputChar))
        printf("\"%c\" is a alphabet", inputChar);
    if(!isalpha(inputChar))
        printf("\"%c\" is not a alphabet", inputChar);
    puts("");

    if (isalnum(inputChar))
        printf("\"%c\" is not a special character", inputChar);
    if(!isalnum(inputChar))
        printf("\"%c\" is a special character", inputChar);

    puts("");
    if (isxdigit(inputChar))
        printf("\"%c\" is a hexadecimal", inputChar);
    if (!isxdigit(inputChar))
        printf("\"%c\" is not a hexadecimal", inputChar);

    puts("");
    if (isspace(inputChar))
        printf("\"%c\" is a whitespace", inputChar);
    if (!isspace(inputChar))
        printf("\"%c\" is not a whitespace", inputChar);

    puts("");
    if (iscntrl('\t'))
        printf("\\t is a control character");

    puts("");
    if (ispunct(inputChar))
        printf("\"%c\" is a punctuation character", inputChar);
    if (!ispunct(inputChar))
        printf("\"%c\" is not a punctuation character", inputChar);

    puts("");
    if (islower(inputChar))
        printf("\"%c\" is lowercase", inputChar);

    if (isupper(inputChar))
        printf("\"%c\" is uppercase", inputChar);

    return 0;

}
