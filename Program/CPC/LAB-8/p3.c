#include <stdio.h>

int main()
{
    int n, i = 0;
    printf("entre n =");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i = i + 1;
    } while (i <= n);
    return 0;
}