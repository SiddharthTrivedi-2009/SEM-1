// strcmp()
#include<stdio.h>
int main(){
    int count1=0,count2=0,i,temp=1;
    char s1[100],s2[100];
    printf("Enter First String\n");
    gets(s1);
    printf("Enter Second String\n");
    gets(s2);
    for(i=0;s1[i]!='\0';i++){
        count1++;
    }
    for(i=0;s2[i]!='\0';i++){
        count2++;
    }
     if(count1==count2){
     for(i=0;i<count1;i++){
        if(s1[i]!=s2[i]){
            temp=0;
            break;
        }
     }
     if(temp==1){
        printf("String Are Same");
    }
    else{
        printf("String Are Not Same");
    }
    }
    else{
        printf("String Are Not Same");
    }

    return 0;
}