#include<stdio.h>
int main(){
    int n,i;
    printf("How Many alphabet you want to enter\n");
    scanf("%d",&n);
    char a[n];
    char *p;
    p=&a[n];
    for(i=0;i<n;i++){
        printf("Enter Alphabet\n");
        scanf("%p",p+i);
    }
    for(i=0;i<n;i++){
        printf("Value=%p Address=%d\n",*(p+i),p+i);
    }
    return 0;
}