#include <stdio.h>
int main()
{
    int n, i = 1, fac = 1;
    printf("n=");
    scanf("%d", &n);
    while (i <= n)
    {
        fac = fac * i;
        i = i + 1;
    }
    printf("%d", fac);
    return 0;
}