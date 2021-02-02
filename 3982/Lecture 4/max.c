//author: Nariman Abdi
//https://github.com/naabdi/
#include <stdio.h>
int max (int, int, int);

int main()
{
    int a, b, c;
    printf("Enter 3 integer numbers:\n");
    printf("Num #1:");
    scanf("%d",&a);
    printf("Num #2:");
    scanf("%d",&b);
    printf("Num #3:");
    scanf("%d",&c);

    printf("The maximum is %d",max(a,b,c));
}

int max(int x, int y, int z)
{
    int max_num = x;
    if (y >= max_num)
    {
        max_num = y;
    }
    if (z >= max_num)
    {
        max_num = z;
    }
    return max_num;
}
