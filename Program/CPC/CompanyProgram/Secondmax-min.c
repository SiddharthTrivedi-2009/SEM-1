#include <stdio.h>
#include <limits.h>

int main()
{
    int n, i;
    printf("How Many Number You Want To Enter : ");
    scanf("%d", &n);
    printf("\n");
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
    }

    int max = a[0], secondmax = a[0], min = a[1], secondmin = a[1];
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            secondmax = max;
            max = a[i];
        }
        else if (a[i] > secondmax && a[i] != max)
        {
            secondmax = a[i];
        }

        if (a[i] < min)
        {
            secondmin = min;
            min = a[i];
        }
        else if (a[i] < secondmin && a[i] != min)
        {
            secondmin = a[i];
        }
    }

    printf("Max = %d\n", max);
    printf("SecondMax = %d\n", secondmax);
    printf("Min = %d\n", min);
    printf("SecondMin = %d\n", secondmin);

    return 0;
}
