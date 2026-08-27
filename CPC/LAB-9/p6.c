#include<stdio.h>
int main(){
    char ch;
    ch='A';
    printf("UPPERCASE\n");
    while(ch<='Z'){
        printf("%c",ch);
        ch++;
    }
    printf("\n");
    ch='a';
     printf("LOWERCASE\n");
    while(ch<='z'){
        printf("%c",ch);
        ch++;
    }
    return 0;
}