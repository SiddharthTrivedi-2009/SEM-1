#include <stdio.h>
#include <string.h>
void copy(char *s, char *p);

int main() {
    char s[100], p[100];
    
    printf("Enter First String\n");
    gets(s);
    
    printf("Enter Second String\n");
    gets(p);
    
    
    copy(s, p);
    printf("Result: %s\n", s);
    
    return 0;
}


void copy(char *s, char *p) {
    for (; *p != '\0'; ) {
        *s++ = *p++;
    }
    *s = '\0'; 
}
