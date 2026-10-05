#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("How Many numbers you want to enter\n");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a[n];
    for(i=0;i<n;i++){
        printf("Enter Number\n");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        sum=sum+(*p+i);
    }
    printf("SUM=%d",sum);
    return 0;
}