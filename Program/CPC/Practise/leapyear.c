#include <stdio.h>
int main()
{
    int n;
    printf("Enter Year");
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        printf("%d is a Leap Year", n);
    }
    else
    {
        printf("%d is not a Leap Year", n);
    }
    return 0;
}