#include <stdio.h>

int main()
{
    int a;
    char num;
    printf("a=");
    scanf("%d", &a);
    num = ((a % 2 == 0) ? (printf("even")) : (printf("odd")));
    printf("%c", num);
    return 0;
}