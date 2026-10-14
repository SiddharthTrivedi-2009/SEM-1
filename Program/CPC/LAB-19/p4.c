#include<stdio.h>
#include<string.h>
void main(){
    char s[100];
    printf("Enter String For Find Length\n");
    scanf("%s",s);
    int ans=strlen(s);
    printf("%d",ans);

    
    char s1[100],s2[100];
    printf("strcmp()");
    printf("Enter First String");
    scanf("%s",s1);
    printf("Enter Second String");
    scanf("%s",s2);
    int ans1=strcmp(s1,s2);
    printf("%d",ans1);


    char s3[100],s4[100];
    printf("strcpy()\n");
    printf("Enter Second String\n");
    scanf("%s",s4);
    strcpy(s3,s4);
    printf("%s",s3);


    char s5[100],s6[100];
    printf("strcat()\n");
    printf("Enter First String\n");
    scanf("%s",s5);
    printf("Enter Second String\n");
    scanf("%s",s6);
    strcat(s5,s6);
    printf("%s",s5);


    char s7[100];
    printf("strrev()\n");
    printf("Enter First String\n");
    scanf("%s",s7);
    strrev(s7);
    printf("%s",s7);


    char s8[100];
    printf("strlwr()\n");
    printf("Enter First String\n");
    scanf("%s",s8);
    strlwr(s8);
    printf("%s",s8);


    char s9[100];
    printf("strupr()\n");
    printf("Enter First String\n");
    scanf("%s",s9);
    strupr(s9);
    printf("%s",s9);

}