#include <stdio.h>
int main()
{
    FILE *fa;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, lines = 0;
    fa = fopen("fa.text", "r");
    if (fa == NULL)
    {
        printf("File Is not Created");
        return 1;
    }
    while ((ch = fgetc(fa)) != EOF)
    {
        chars++;
        if (ch == ' ')
        {
            spaces++;
        }
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            chars++;
        }
        if (ch == '\t')
        {
            tabs++;
        }
        if (ch == '\n')
        {
            lines++;
        }
    }
    printf(" Spaces = %d", spaces);
    printf(" Chars = %d", chars);
    printf(" Tabs = %d", tabs);
    printf(" Lines = %d", lines);
    fclose(fa);
    return 0;
}