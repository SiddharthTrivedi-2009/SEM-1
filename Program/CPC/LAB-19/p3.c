#include<stdio.h>
void arr(int a[],int n);
void main(){
    int n,i;
    printf("How Many Elements you want to enter");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    arr(a,n);
}
void arr(int a[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}