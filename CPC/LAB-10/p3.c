#include<stdio.h>
int main(){
    int n,i=1,count=0;
    printf("n=");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            count=count+1;
        }
        i=i+1;
    }
    if(count==2){
        printf("prime");
    }
    else{
        printf("not prime");
    }
    return 0;
}