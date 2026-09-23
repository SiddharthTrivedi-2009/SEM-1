#include<stdio.h>
#include<math.h>
int main(){
    int m,n,m1,n1,i,j;
    printf("Enter Number Of Row for Matrix = ");
    scanf("%d",&m);
    printf("Enter Number Of Coloumn for Matrix = ");
    scanf("%d",&n);
    int a[m][n],b[m][n];
    printf("For 1st Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("For 2nd Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("1st Matrix\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("2nd Matrix\n");
    printf("\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Sum Of Matrix :-\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
    return 0;
}