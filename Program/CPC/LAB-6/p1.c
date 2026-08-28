#include <Stdio.h>

int main()
{
    int a, b, input;
    printf("a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("enter 1 for addition\n enter 2 for substraction\n enter 3 for multiplication\n enter 4 for division\n");
    printf("input=");
    scanf("%d", &input);
    if (input == 1)
    {
        a + b;
        printf("%d", a + b);
    }
    else if (input == 2)
    {
        a - b;
        printf("%d", a - b);
    }
    else if (input == 3)
    {
        a *b;
        printf("%d", a * b);
    }
    else if (input == 4)
    {
        a / b;
        printf("%d", a / b);
    }
    else
    {
        printf("invalid input");
    }
    return 0;
}