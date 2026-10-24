#include <stdio.h>
int main()
{
    int n, i, j, count = 0;
    printf("How Many numbers you want to enter\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number\n");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        count = 1;
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j] && i != j)
            {
                count = 0;
                break;
            }
        }
        if (count == 1)
        {
            printf("The first non-repeated number is: %d\n", a[i]);
            return 0;
        }
    }
    return 0;
}
