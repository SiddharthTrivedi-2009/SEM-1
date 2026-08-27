#include<stdio.h>

int main(){
    int a;
    printf("a=");
    scanf("%d",&a);
    if(a%2==0){
        printf("a is an even number");
    }
    else{
      printf("a is an odd number");  
    }
    return 0;
}