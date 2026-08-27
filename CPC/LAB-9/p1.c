#include<stdio.h>
int main(){
    int n,sum=0,i=1;
    printf("n=");
    scanf("%d",&n);
    while(i<=n){
        if(i%2==0){
            sum=sum-i;
        }
        else{
            sum=sum+i;
        }
        i=i+1;
    }
    printf("%d",sum);
    return 0;
}