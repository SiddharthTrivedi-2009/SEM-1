#include<stdio.h>
int main(){
    int n,i,sum=0,max=0,min;
    printf("N=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    min=a[1];
    for(i=0;i<n;i++){
        sum=sum+a[i];
        if(a[i]>max){
            max=a[i];
        }
        if(a[i]<min){
            min=a[i];
        }
        
    }
    printf("Sum=%d\n",sum);
    printf("Avg=%d\n",sum/n);
    printf("Max=%d\n",max);
    printf("Min=%d",min);
   
    return 0;
    
}