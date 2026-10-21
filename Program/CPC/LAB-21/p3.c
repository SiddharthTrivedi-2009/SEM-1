#include <stdio.h>
#include <string.h>
struct employee
{
    char name[100];
    float percentage;
    int age;
};
void main()
{
    struct employee emp[5];
    int i;
    for(i=0;i<5;i++){
    printf("Enter Name\n");
    scanf("%s", emp[i].name);
    printf("Enter Percentage\n");
    scanf("%f", &emp[i].percentage);
    printf("Enter Age\n");
    scanf("%d", &emp[i].age);
    }
     for(i=0;i<5;i++){
    printf("Student \n");
    printf(" Name=%s\n Percentage=%f\n Age=%d\n", emp[i].name, emp[i].percentage, emp[i].age);
     }
}