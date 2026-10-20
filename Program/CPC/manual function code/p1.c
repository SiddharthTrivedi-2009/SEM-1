// strlen()
#include<stdio.h>
int main(){
    int count=0,i;
    char s1[100];
    printf("Enter String\n");
    gets(s1);
    for(i=0;s1[i]!='\0';i++){
        count++;
    }
    printf("Size Of String = %d",count);
    return 0;


}