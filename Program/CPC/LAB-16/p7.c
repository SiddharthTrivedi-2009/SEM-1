#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, i, j, count = 0;
    printf("Enter Number Of Row = ");
    scanf("%d", &m);
    printf("Enter Number Of Coloumn = ");
    scanf("%d", &n);
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (m * n / 2 < count)
    {
        printf("Matrix is a  Sparse Matrix");
    }
    else
    {
        printf("Matrix is not a Sparse Matrix");
    }
    return 0;
}