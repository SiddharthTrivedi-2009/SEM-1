#include <stdio.h>

int main()
{
    int month;
    printf("month=");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
    {
        printf("31 day");
        break;
    }
    case 2:
    {
        printf("28 day");
        break;
    }
    case 3:
    {
        printf("31 day");
        break;
    }
    case 4:
    {
        printf("30 day");
        break;
    }
    case 5:
    {
        printf("31 day");
        break;
    }
    case 6:
    {
        printf("30 day");
        break;
    }
    case 7:
    {
        printf("31 day");
        break;
    }
    case 8:
    {
        printf("31 day");
        break;
    }
    case 9:
    {
        printf("30 day");
        break;
    }
    case 10:
    {
        printf("31 day");
        break;
    }
    case 11:
    {
        printf("30 day");
        break;
    }
    case 12:
    {
        printf("31 day");
        break;
    }
    default:
    {
        printf("wrong input");
    }
    }
    return 0;
}