#include <stdio.h>
int main()
{
    int x, y, mul = 1, i;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    for (i = 1; i <= y; i++)
    {
        mul = mul * x;
    }
    printf("%d", mul);
    return 0;
}