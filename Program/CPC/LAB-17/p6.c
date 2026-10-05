#include<stdio.h>
int main(){
    int n,i;
    printf("how many num you want to enter");
    scanf("%d",&n);
    int a[n],*p;
    p=&a[n];
    for(i=0;i<n;i++){
        printf("Enter Number\n");
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}