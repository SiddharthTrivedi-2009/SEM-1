#include <stdio.h>
int main()
{
    int x, y, i = 1, mul = 1;
    printf("x=");
    scanf("%d", &x);
    printf("y=");
    scanf("%d", &y);
    while (i <= y)
    {
        mul = mul * x;
        i = i + 1;
    }
    printf("%d", mul);

    return 0;
}