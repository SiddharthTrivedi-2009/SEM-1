#include<stdio.h>
void temp(int a,int b);
void main(){
    int a,b;
    printf("Enter First Num\n");
    scanf("%d",&a);
    printf("Enter Second Num\n");
    scanf("%d",&b);
    temp(a,b);
}
void temp(int a,int b){
    if(a>b){
        printf("Max = %d\n",a);
        printf("Min = %d\n",b);
    }
    else{
     printf("Max = %d\n",b);
     printf("Min = %d\n",a);   
    }
}