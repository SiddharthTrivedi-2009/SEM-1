#include <stdio.h>
int main()
{
    int a, b, c, avg;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    avg = (a + b + c) / 3;
    printf("avg=%d", avg);
    return 0;
}