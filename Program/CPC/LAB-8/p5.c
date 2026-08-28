#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Entetr n =");
    scanf("%d",&n);
    while (i <= n)
    {
        if (i % 2 != 0)
        {

            printf("%d\n", i);
        }
        i = i + 1;
    }
    return 0;
}