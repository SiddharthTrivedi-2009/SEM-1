#include <stdio.h>

int main()
{
    char ch;
    printf("ch=");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is an upper case", ch);
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lower case", ch);
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit", ch);
    }
    else
    {
        printf("%c is a special charcter", ch);
    }
    return 0;
}