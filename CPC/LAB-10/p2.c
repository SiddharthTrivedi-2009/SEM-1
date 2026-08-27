#include<stdio.h>
int main(){
    int n,sum=0,count=0,avg;
    char a;
    while(1){
        printf("a=");
        scanf(" %c",&a);
        if(a=='y'){
        printf("n=");
        scanf("%d",&n);
         count=count+1;
        }
        else{
            break;
        } 
        sum=sum+n;
        avg=sum/count;  
    }
    printf("sum=%d\n",sum);
    printf("avg=%d",avg);
    return 0;
}