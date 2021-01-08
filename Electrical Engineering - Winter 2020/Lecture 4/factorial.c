//author: Nariman Abdi
//https://github.com/naabdi/
#include <stdio.h>
unsigned long long int fact(unsigned int);

int main()
{
    unsigned int x;
    printf("Enter a Number:\n");
    scanf("%u",&x);
    printf("Factorial(%u) = %llu",x,fact(x));
}

unsigned long long int fact(unsigned int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n*fact(n-1);
    }
    
}