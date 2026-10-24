#include <stdio.h>
void sum(int a, int b);
void main()
{
    int a, b;
    printf("Enter First Num for Addition");
    scanf("%d", &a);
    printf("Enter First Num for Addition");
    scanf("%d", &b);
    sum(a, b);
}
void sum(int a, int b)
{
    printf("Sum = %d", a + b);
}