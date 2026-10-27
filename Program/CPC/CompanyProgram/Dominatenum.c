#include <stdio.h>
void main()
{
    int n, i, j, count = 0;
    printf("How Many Num You Want To Enter : \n");
    scanf("%d", &n);
    int a[n], b[10] = {0};
    for (i = 0; i < n; i++)
    {
        printf("Enter Number : ");
        scanf("%d", &a[i]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        switch (a[i])
        {
        case (0):
            b[0]++;
            break;

        case (1):
            b[1]++;
            break;

        case (2):
            b[2]++;
            break;

        case (3):
            b[3]++;
            break;

        case (4):
            b[4]++;
            break;

        case (5):
            b[5]++;
            break;

        case (6):
            b[6]++;
            break;

        case (7):
            b[7]++;
            break;

        case (8):
            b[8]++;
            break;

        case (9):
            b[9]++;
            break;

        default:
            b[0] = 0;
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (b[i] > 0)
        {
            count++;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (b[i] > count)
        {
            printf("Dominant Number: %d\n", i);
        }
        if(b[i] <= count){
            printf("No Dominant Number\n");
        }
    }

    
}