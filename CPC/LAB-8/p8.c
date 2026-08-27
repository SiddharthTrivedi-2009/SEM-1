#include<stdio.h>
int main(){
    int n,i=0,sum=0;
    printf("n=");
    scanf("%d",&n);
    while(i<=n){
        sum=sum+i;
        
        i=i+1;
    }
    printf("%d",sum);
    return 0;
}