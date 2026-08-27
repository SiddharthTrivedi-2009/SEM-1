#include<stdio.h>
int main(){
    float principle,roi,time,interest;
    printf("principle=");
    scanf("%f",&principle);
    printf("roi=");
    scanf("%f",&roi);
    printf("time=");
    scanf("%f",&time);
    interest=(principle*roi*time)/100;
    printf("interest=%f",interest);
    return 0;
}