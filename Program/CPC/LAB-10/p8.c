#include<stdio.h>
#include<math.h>

int main(){
    int n,var=0,count=0,sum=0,new=0,nw=0,var2=0;
    printf("give a number");
    scanf("%d",&n);
    new=n;
    nw=n;
    while(n!=0){
        var=n%10;
        n=n/10;
        count=count+1;
    }
    while(new!=0){
        var2=new%10;
        new=new/10;
        sum=(pow(var2,count)+0.5)+sum;
    }
    
    if(sum==nw){
            printf("its armstrong number");
        }
        else{
            printf("its not armstrong number");
        }
    return 0;
}