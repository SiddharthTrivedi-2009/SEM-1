#include <stdio.h>
int main()
{
    int rows, i, j;
    printf("give num");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", rows - j);
        }
        printf("\n");
    }
    return 0;
}