#include<stdio.h>
int main(){
    int n,roll,i,j;

    printf("Enter Number Of Student = ");
    scanf("%d",&n);

    int a[n][2];

    for(i=0;i<n;i++){
        printf("Enter Roll no. : ");
        scanf("%d",&a[i][0]);
        printf("Enter %d's mark : ",a[i][0]);
        scanf("%d",&a[i][1]);
    }

    for(i=0;i<n;i++){
        printf("%d--",a[i][0]);
        printf("%d",a[i][1]);
        printf("\n");
    }
    printf("Enter Student Roll Number = ");
    scanf("%d",&roll);
    for(i=0;i<n;i++){
        if(roll==a[i][0]){
            printf("Mark = %d",a[i][1]);
        }
    }
}