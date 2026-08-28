#include<stdio.h>
int main(){
    int n,digit;
    printf("n=");
    scanf("%d",&n);
    while(n!=0){
      digit=n%10;
      printf("%d\t",digit);
      n=n/10;
    }
    return 0;
}