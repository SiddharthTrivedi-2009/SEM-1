#include <stdio.h>
int main()
{
    int i, n, sum = 0, a = 0, b = 1;
    printf("n=");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d\t", a);
        sum = a + b;
        b = a;
        a = sum;
    }
    return 0;
}