#include <stdio.h>
#include <math.h>
int main()
{
    int m, n, m1, n1, i, j, k;
    printf("Enter Number Of Row Of 1st Matrix = ");
    scanf("%d", &m);
    printf("Enter Number Of Coloumn Of 1st Matrix = ");
    scanf("%d", &n);
    printf("Enter Number Of Row Of 2nd Matrix = ");
    scanf("%d", &m1);
    printf("Enter Number Of Coloumn Of 2nd Matrix = ");
    scanf("%d", &n1);
    int a[m][n], b[m1][n1], sum[m][n1];
    if (n == m1)
    {
        printf("For 1st Matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf(" 1st Matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("For 2nd Matrix\n");
        for (i = 0; i < m1; i++)
        {
            for (j = 0; j < n1; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        printf(" 2nd Matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", b[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n1; j++)
            {
                sum[i][j] = 0;
                for (k = 0; k < n1; k++)
                {
                    sum[i][j] = sum[i][j] + a[i][k] * b[k][j];
                }
            }
            printf("\n");
        }
        printf("Multiplication Of Matrix\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d\t", sum[i][j]);
            }
            printf("\n");
        }
    }

    else
    {
        printf("Multiplication Not Possible");
    }
    return 0;
}