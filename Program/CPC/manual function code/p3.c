// strcpy()
#include <stdio.h>
int main()
{
    int i;
    char s1[100], s2[100];
    printf("Enter First String\n");
    gets(s1);
    printf("Enter Second String\n");
    gets(s2);
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[i] = s2[i];
    }
    s1[i] = '\0';
    puts(s1);
    return 0;
}