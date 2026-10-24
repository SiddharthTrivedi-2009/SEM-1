#include <stdio.h>
void fac(int n);
void main()
{
    int n;
    printf("N=");
    scanf("%d", &n);
    fac(n);
}
void fac(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d", fact);
}