#include<stdio.h>
int main(){
    float c,f;
    printf("f=");
    scanf("%f",&f);
    c=(((f-32)*5)/9);
    printf("c=%f",c);
    return 0;
}