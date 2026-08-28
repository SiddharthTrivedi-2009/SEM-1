#include<stdio.h>
int main(){
    int n,i=1,mul;
    printf("n=");
    scanf("%d",&n);
    while(i<=10){
        mul=n*i;
        printf("%d*%d=%d\n",n,i,mul);
        i=i+1;
    }
    return 0;
}