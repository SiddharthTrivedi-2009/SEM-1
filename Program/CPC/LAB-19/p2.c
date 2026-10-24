#include <stdio.h>
int fac(int n);
void main()
{
    int n;
    printf("N=");
    scanf("%d", &n);
    int temp = fac(n);
    printf("%d", temp);
}
int fac(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fac(n - 1);
    }
}