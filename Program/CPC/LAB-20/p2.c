#include<stdio.h>
#include<string.h>
void main(){
    int i;
    char s[100];
    printf("Enter String\n");
    gets(s);
    for(i=0;s[i]!='\0';i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
            printf("%c",s[i]);
        }

    }

}