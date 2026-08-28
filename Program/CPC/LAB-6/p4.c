#include <stdio.h>

int main()
{
    int num, rem;
    printf("num=");
    scanf("%d", &num);
    rem = num % 10;
    if (rem % 2 == 0)
    {
        printf("%d is an even number", rem);
    }
    else
    {
        printf("%d is an odd number", rem);
    }
    return 0;
}