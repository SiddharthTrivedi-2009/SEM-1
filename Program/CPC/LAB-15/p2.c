#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("n=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]<0){
            count++;
        }
    }
    printf("negative=%d",count);
    return 0;
}