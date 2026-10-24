#include <stdio.h>
int main()
{
    int rows, i, j, new = 1;
    printf("give num");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", new);
            if (new == 1)
            {
                new = 0;
            }
            else
            {
                new = 1;
            }
        }
        printf("\n");
    }
    return 0;
}