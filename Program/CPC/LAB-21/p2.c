#include<stdio.h>
#include<string.h>
struct book {
   char title[100];
   char author[100];
   char publication[100];
   int  price;
};
void main(){

    struct book book1;
    printf("Enter Details Of 1st Book\n");
    printf("Enter Title = ");
    scanf("%s",book1.title);
    printf("Enter Author = ");
    scanf("%s",book1.author);
    printf("Enter Publication = ");
    scanf("%s",book1.publication);
    printf("Enter Price = ");
    scanf("%d",&book1.price);

    struct book book2;
    printf("Enter Details Of 2nd Book\n");
    printf("Enter Title = ");
    scanf("%s",book2.title);
    printf("Enter Author = ");
    scanf("%s",book2.author);
    printf("Enter Publication = ");
    scanf("%s",book2.publication);
    printf("Enter Price = ");
    scanf("%d",&book2.price);

    struct book book3;
    printf("Enter Details Of 3rd Book\n");
    printf("Enter Title = ");
    scanf("%s",book3.title);
    printf("Enter Author = ");
    scanf("%s",book3.author);
    printf("Enter Publication = ");
    scanf("%s",book3.publication);
    printf("Enter Price = ");
    scanf("%d",&book3.price);
    
    printf("Book 1\n");
    printf(" Title=%s\n Author=%s\n Publication=%s\n Price=%d\n",book1.title,book1.author,book1.publication,book1.price);
    printf("Book 2\n");
    printf(" Title=%s\n Author=%s\n Publication=%s\n Price=%d\n",book2.title,book2.author,book2.publication,book2.price);
    printf("Book 3\n");
    printf(" Title=%s\n Author=%s\n Publication=%s\n Price=%d\n",book3.title,book3.author,book3.publication,book3.price);
}