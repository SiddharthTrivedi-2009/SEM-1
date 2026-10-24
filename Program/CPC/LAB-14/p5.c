#include <stdio.h>
int main()
{
    int n, count = 0, i;
    printf("n=");
    scanf("%d", &n);
    int h[n], w[n];
    for (i = 0; i < n; i++)
    {
        printf("define %d person height", i + 1);
        scanf("%d", &h[i]);
        printf("define %d person weight", i + 1);
        scanf("%d", &w[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (h[i] > 170 && w[i] < 50)
        {
            count++;
        }
    }
    printf("Person=%d", count);
    return 0;
}