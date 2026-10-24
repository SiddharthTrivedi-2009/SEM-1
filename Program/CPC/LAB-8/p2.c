#include <stdio.h>

int main()
{
    int n, i;
    i = 0;
    printf("Enter n For print=");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d\n", i);
        i = i + 1;
    }
    return 0;
}