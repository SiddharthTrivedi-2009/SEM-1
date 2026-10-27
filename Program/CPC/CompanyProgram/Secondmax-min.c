// Find Maximum, Second Maximum, Minimum, and Second Minimum from an Array
// This program takes an array of integers as input and identifies:
// • the Maximum element,
// • the Second Maximum element,
// • the Minimum element, and
// • the Second Minimum element.
// The array must contain at least four distinct elements to determine all four values correctly.
#include <stdio.h>
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

    int max = a[0], secondmax = a[0], min = a[0], secondmin = a[0];
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
