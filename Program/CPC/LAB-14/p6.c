#include<stdio.h>
int main(){
    int n,i,sum=0,count=0;
    printf("N=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+a[i];    
    }
    for(i=0;i<n;i++){
        if(sum/n<a[i]){
            count++;
        }    
    }
    printf("count=%d",count);
    
   
    return 0;
    
}