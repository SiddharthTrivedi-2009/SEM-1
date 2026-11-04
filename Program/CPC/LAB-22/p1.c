#include<stdio.h>
int main(){
   FILE *fa;
   fa=fopen("fa.text","w");
   if(fa == NULL){
    printf("File Is not Created");
    return 1;
   }
   printf("file Created");
   fclose(fa);
   return 0;
}