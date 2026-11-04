#include <stdio.h>
int main()
{
    FILE *fa;
    char ch;
    int chars = 0, spaces = 0, tabs = 0, lines = 0;
    fa = fopen("fa.txt", "w");
    if (fa == NULL)
    {
        printf("File Is not Created");
        return 1;
    }
    fprintf(fa,"Siddharth\nTrivedi");
    fclose(fa);
    fa = fopen("fa.txt", "r");

    while ((ch = fgetc(fa)) != EOF)
    {
        chars++;
        if (ch == ' ')
        {
            spaces++;
        }
        
        else if (ch == '\t')
        {
            tabs++;
        }
        else if (ch == '\n')
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