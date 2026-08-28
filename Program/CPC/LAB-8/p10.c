#include <stdio.h>
int main()
{
    int n, i, sr;
    i = 0, n = 0;
    while (i <= 9)
    {
        printf("%d", i);
        while (n >= i)
        {
            if (i / n == n)
            {
                printf("%d\n", n);
                break;
            }
            n = n + 1;
        }
        i = i + 1;
    }
    return 0;
}