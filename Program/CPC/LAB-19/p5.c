#include <stdio.h>
void charcter(char s[], char a);
void main()
{
    char s[100], a;
    printf("Enter String\n");
    gets(s);
    printf("Enter Charcter\n");
    scanf("%c", &a);
    charcter(s, a);
}
void charcter(char s[], char a)
{
    int i;
    for (i = 0; s[i] != 0; i++)
    {
        if (a == s[i])
        {
            printf("%d", i);
            break;
        }
    }
}