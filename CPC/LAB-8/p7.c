#include<stdio.h>
int main(){
    int a,b,i;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    i=a;
    while(i<b){
        if(i%2==0){
            printf("%d\n",i);
        }
        i=i+1;
    }
    return 0;
}