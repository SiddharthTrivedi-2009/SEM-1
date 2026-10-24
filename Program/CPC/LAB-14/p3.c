#include <stdio.h>
int main()
{
    int n, i, countodd = 0, counteven = 0;
    printf("N=");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            counteven++;
        }
        else
        {
            countodd++;
        }
    }
    printf("even=%d\n", counteven);
    printf("odd=%d", countodd);
    return 0;
}