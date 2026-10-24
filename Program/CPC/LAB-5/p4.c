#include <stdio.h>

int main()
{
    int a;
    printf("a=");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("a is a positive number");
    }
    else
    {
        printf("a is a negative number");
    }
    return 0;
}