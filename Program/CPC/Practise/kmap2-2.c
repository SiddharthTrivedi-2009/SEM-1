// KMAP 2*2
#include <stdio.h>
void main()
{
    int n, i, count = 0;
    printf("Enter How Many Num You Want To Enter :  \n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Num : \n");
        scanf("%d", &a[i]);
    }
    printf("Expression : ");
    for (i = 0; i < n; i++)
    {
        if (n == 4)
        {
            printf("1");
            break;
        }
        if (a[i] == 0)
        {
            if (a[i + 1] == 1 || a[i + 2] == 1 || a[i + 3] == 1)
            {
                printf("A' + ");
                count = 1;
            }
            if (a[i + 1] == 2 || a[i + 2] == 2 || a[i + 3] == 2)
            {
                printf("B' + ");
                count = 1;
            }
            if (a[i + 1] == 3 || a[i + 2] == 3 || a[i + 3] == 3)
            {
                printf("B + ");
                count = 1;
            }
            if (count == 0)
            {
                printf("A'B' + ");
            }
            break;
        }
        count = 0;
        if (a[i] == 1)
        {
            if (a[i + 1] == 3 || a[i + 2] == 3 || a[i + 3] == 3)
            {
                printf("B + ");
                count = 1;
            }
            if ((a[i + 1] == 2 || a[i + 2] == 2 || a[i + 3] == 2) && (count == 1))
            {
                printf("A + ");
                count = 1;
            }
            else
            {
                printf("AB' + ");
            }
            if (count == 0)
            {
                printf("A'B + ");
            }
            break;
        }
        count = 0;
        if (a[i] == 2)
        {
            if (a[i + 1] == 3 || a[i + 2] == 3 || a[i + 3] == 3)
            {
                printf("B + ");
                count = 1;
            }
            if (count == 0)
            {
                printf("AB' + ");
            }
            break;
        }
        if (a[i] == 3)
        {
            if ((a[i + 1] != 2 && a[i + 1] != 1) || (a[i + 2] != 2 && a[i + 2] != 1) || (a[i + 3] != 2 && a[i + 3] != 1))
            {
                printf("AB + ");
            }
            break;
        }
    }
}