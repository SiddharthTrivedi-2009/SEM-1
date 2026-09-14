#include<stdio.h>
int main(){
    int i,j,n,new,temp;
    printf("N=");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1 || i==n){
            new=j;
            for(new=1;new<=n;new++){
                printf("* ");
            }
        }
        else{
             for(j=1;j<=n;j++){
                if(j==1 || j==n){
                    printf("*");
                }
                else{
                    printf("  ");
                }
             }
    }
    printf("\n");
    }
    return 0;
}