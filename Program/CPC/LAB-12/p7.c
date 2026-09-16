#include<stdio.h>

int main(){
    int row,i,j,facupper=1,facr=1,facn_r=1,n=0,r=0,nmr=0,ans,s,temp;
    printf("give number");
    scanf("%d",&row);
    temp=row;
    for(i=0;i<=row;i++){
        
        for(s=0;s<=row-i;s++){
            printf(" ");
        }
        for(j=0;j<=i;j++){
            facupper=1;facr=1;facn_r=1;
            for(n=1;n<=i;n++){
        facupper=n*facupper;
       
    }
            for(nmr=1;nmr<=i-j;nmr++){
        facn_r=nmr*facn_r;
       
    }
            for(r=1;r<=j;r++){
        facr=facr*r;
       
            }
             ans=(facupper/(facn_r*facr));
        printf("%d ",ans);
        }
       printf("\n");
    }
    return 0;
}