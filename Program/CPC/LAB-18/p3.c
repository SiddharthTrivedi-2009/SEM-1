#include<stdio.h>
void temp(int a,int b,int c);
void main(){
    int a,b,c;
    printf("Enter Principle Value\n");
    scanf("%d",&a);
    printf("Enter Time Period Value\n");
    scanf("%d",&b);
    printf("Enter ROI Value\n");
    scanf("%d",&c);
    temp(a,b,c);
}
void temp(int a,int b,int c){
    printf("Simple Interest = %d",a*b*c/100);
}