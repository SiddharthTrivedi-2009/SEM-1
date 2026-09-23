#include<stdio.h>
#include<math.h>
int main(){
    int m,n,i,j,sum=0;
    printf("Enter Number Of Row = ");
    scanf("%d",&m);
    printf("Enter Number Of Coloumn = ");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Diagonal Elements : ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
           if(i==j){
            printf("%d ",a[i][j]);
            sum=sum+a[i][j];
           } 
        }
    }
    printf("\n");
    printf("Trace = %d",sum);
    return 0;
}