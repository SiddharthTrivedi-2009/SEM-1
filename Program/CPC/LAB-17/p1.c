#include<stdio.h>
int main(){
    int n,i;
    printf("how many numbers you want to enter:");
    scanf("%d",&n);
    int a[n];
    int *p;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        printf("value=%d Address=%d\n",a[i],);
        *p++;
    }
     return 0;
}