#include <stdio.h>

int main()
{
    char s;
    printf("s=");
    scanf("s=%c", &s);
    if (s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u')
    {
        printf("%c is a vowel charcter", s);
    }
    else
    {
        printf("%c is a consonant charcter", s);
    }
    return 0;
}