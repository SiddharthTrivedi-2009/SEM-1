#include<stdio.h>
int main(){
    int i;
    char s1[100],c;
    printf("Enter String\n");
    gets(s1);
    printf("Enter Alphabet\n");
    scanf("%c",&c);
    for(i=0;s1[i]!='\0';i++){
     if(c==s1[i]){
        printf("Char=%c\tLocation=%d",c,i);
        break;
     }
    }
    return 0;
}