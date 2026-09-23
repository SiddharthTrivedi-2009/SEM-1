#include<stdio.h>
#include<math.h>
int main(){
    int m,n,i,j,countp=0,countn=0,countz=0;
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
         if(a[i][j]>0){
            countp++;
         } 
         if(a[i][j]<0){
            countn++;
         } 
         if(a[i][j]==0){
            countz++;
         }    
        }
    }
    printf("Positive = %d\n",countp);
    printf("Negative = %d\n",countn);
    printf("Zero = %d",countz);
    return 0;
}