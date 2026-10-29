#include<stdio.h>
void main(){
    int a,n,k;
    printf("How Many Items You Want To Enter : \n");
    scanf("%d",&a);
    int a[a][2];
    printf("Enter  Maximum number of items that can be selected : \n");
    scanf("%d",&n);
    printf("Enter Maximum number of times the same Category can be selected repeatedly : \n");
    scanf("%d",&k);
    for(int i=0;i<a;i++){
        printf("Enter price ");
        scanf("%d",a[i][0]);
        printf("Enter Category ");
        scanf("%d",a[i][0]);
    }
}