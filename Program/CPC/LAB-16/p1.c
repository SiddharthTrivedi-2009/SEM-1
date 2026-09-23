#include<stdio.h>
#include<math.h>
int main(){
    int m,n,i,j;
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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}