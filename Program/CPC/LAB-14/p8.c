#include<stdio.h>
int main(){
    int n,i,j,count=0;
    printf("N=");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("Enter all Number");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
                break;
            }
        }
    }
    printf("%d",count);
    return 0;
}