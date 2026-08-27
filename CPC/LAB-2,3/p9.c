#include<stdio.h>
int main(){
    int height,base,area;
    printf("height=");
    scanf("%d",&height);
    printf("base=");
    scanf("%d",&base);
    area=(base*height)/2;
    printf("area=%d",area);
    return 0;
}