#include <stdio.h>
int main()
{
    int i, count = 0;
    char a[50];
    printf("Enter");
    scanf("%s", a);
    for (i = 0; i < 50; i++)
    {
        if (a[i] != 0)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("string=%s\n", a);
    printf("Length=%d", count);
    return 0;
}