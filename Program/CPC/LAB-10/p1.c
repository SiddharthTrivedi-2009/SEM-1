#include <stdio.h>
int main()
{
    int n, rem, count = 0, first, last;
    printf("n=");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        count = count + 1;
        if (count == 1)
        {
            last = rem;
        }
    }
    first = rem;
    printf("%d", first + last);
    return 0;
}