#include <stdio.h>

int main()
{
    int n, i = 1;
    n = 10;
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