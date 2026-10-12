#include<stdio.h>
void temp(int a,int b,int c);
void main(){
    int a,b,c;
    printf("Enter First Value\n");
    scanf("%d",&a);
    printf("Enter Second Value\n");
    scanf("%d",&b);
    printf("Enter Third Value\n");
    scanf("%d",&c);
    temp(a,b,c);
}
void temp(int a,int b,int c){
    if(a>b && a>c){
        printf("MAX = %d",a);
    }
    if(b>a && b>c){
        printf("MAX = %d",b);
    }
    else{
      printf("MAX = %d",c);  
    }
}