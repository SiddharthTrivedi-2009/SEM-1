#include <stdio.h>

int main()
{
    int a, b, c;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is a largest number", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is a largest number", b);
    }
    else
    {
        printf("%d is a largest number", c);
    }
    return 0;
}