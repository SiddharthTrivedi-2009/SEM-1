#include<stdio.h>
void temp(int a,int b);
void main(){
    int a,b;
    printf("Enter First Num \n");
    scanf("%d",&a);
    printf("Enter Second Num \n");
    scanf("%d",&b);
    temp(a,b);
}
void temp(int a,int b){
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    printf("a = %d\n",a);
    printf("b = %d",b);
}