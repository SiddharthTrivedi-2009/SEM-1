#include <stdio.h>
#include <string.h>
void main()
{
    char s[100], p[100];
    printf("Enter String\n");
    gets(s);
    strcpy(p, s);
    if (strcmp(p, strrev(s)) == 0)
    {
        printf("String is a palidrom");
    }
    else
    {
        printf("string is not a palidrom");
    }
}