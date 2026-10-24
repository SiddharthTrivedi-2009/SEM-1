#include <stdio.h>
int main()
{
    int n, i, j, temp;
    printf("N=");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = n; i <= j; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}