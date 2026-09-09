#include<stdio.h>
int main(){
    int n,i,fac,j;
    float e,sum=1.0;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            i=i*j;
        }
        for(j=1;j<=i;j++){
            j=j*j;
        }
        sum=i/(j*(i-j));
    }
    printf("%f",sum-1);
    return 0;
}