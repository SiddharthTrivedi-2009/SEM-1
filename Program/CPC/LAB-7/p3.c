#include <stdio.h>
int main()
{
    int a, b, num;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("sum=1\n sub=2\n mul=3\n div=4\n");
    printf("num=");
    scanf("%d", &num);
    switch (num)
    {
    case 1:
    {
        printf("%d", a + b);
        break;
    }
    case 2:
    {
        printf("%d", a - b);
        break;
    }
    case 3:
    {
        printf("%d", a * b);
        break;
    }
    case 4:
    {
        printf("%d", a / b);
        break;
    }
    default:
    {
        printf("wrong input");
    }
    }
    return 0;
}