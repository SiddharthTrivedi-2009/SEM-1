#include <stdio.h>
int main()
{
    int i, n, digit, count0 = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0, count6 = 0, count7 = 0, count8 = 0, count9 = 0;
    printf("N=");
    scanf("%d", &n);
    for (i = 1; n != 0; i++)
    {
        digit = n % 10;
        n = n / 10;
        switch (digit)
        {
        case (0):
        {
            count0 = count0 + 1;
            break;
        }
        case (1):
        {
            count1 = count1 + 1;
            break;
        }
        case (2):
        {
            count2 = count2 + 1;
            break;
        }
        case (3):
        {
            count3 = count3 + 1;
            break;
        }
        case (4):
        {
            count4 = count4 + 1;
            break;
        }
        case (5):
        {
            count5 = count5 + 1;
            break;
        }
        case (6):
        {
            count6 = count6 + 1;
            break;
        }
        case (7):
        {
            count7 = count7 + 1;
            break;
        }
        case (8):
        {
            count8 = count8 + 1;
            break;
        }
        case (9):
        {
            count9 = count9 + 1;
            break;
        }
        }
    }
    printf("number of 0=%d\n", count0);
    printf("number of 1=%d\n", count1);
    printf("number of 2=%d\n", count2);
    printf("number of 3=%d\n", count3);
    printf("number of 4=%d\n", count4);
    printf("number of 5=%d\n", count5);
    printf("number of 6=%d\n", count6);
    printf("number of 7=%d\n", count7);
    printf("number of 8=%d\n", count8);
    printf("number of 9=%d\n", count9);
    return 0;
}