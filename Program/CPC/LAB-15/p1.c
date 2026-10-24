#include <stdio.h>
int main()
{
    int n, i;
    printf("n=");
    scanf("%d", &n);
    int a[n], b[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        b[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", b[i]);
    }
    return 0;
}