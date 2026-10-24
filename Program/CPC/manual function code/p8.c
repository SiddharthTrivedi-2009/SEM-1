// strrev ()
#include <stdio.h>
int main()
{
    int i, j, len = 0;
    char s[100], temp[100];
    printf("Enter String\n");
    gets(s);
    for (i = 0; s[i] != 0; i++)
    {
        len++;
    }
    for (j = 0; len / 2 >= j; j++)
    {
        temp[j] = s[j];
        s[j] = s[len - j];
        s[len - j] = temp[j];
    }
    printf("\n");
    for (j = 0; len >= j; j++)
    {
        printf("%c", s[j]);
    }
}