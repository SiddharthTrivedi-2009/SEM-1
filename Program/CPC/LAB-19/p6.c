#include<stdio.h>
void charcter(char s[],char a,char b);
void main(){
    char s[100],a,b;
    printf("Enter String\n");
    gets(s);
    printf("Enter Charcter\n");
    scanf("%c",&a);
    printf("what you want to replace\n");
    scanf("%c",&b);
    charcter(s,a,b);
}
void charcter(char s[],char a,char b){
     int i;
     for(i=0;s[i]!='\0';i++){
        if(a==s[i]){
            s[i]=b;
        }
    }
    puts(s);
}