#include<stdio.h>
int main(){
    int n,i,fac,j;
    float e,sum=1.0;
    printf("n=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac=1;
        for(j=1;j<=i;j++){
            fac=fac*j;
        }
        sum=sum+((float)1/fac);
    }
    printf("%f",sum-1);
    return 0;
}