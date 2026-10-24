#include <stdio.h>
int main()
{
    int a, b;
    int *p, *q, t;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    p = &a;
    q = &b;

    t = *q;
    *q = *p;
    *p = t;
    printf("a:%d\n", a);
    printf("b:%d", b);
    return 0;
}