#include <stdio.h>
#include <string.h>

struct employee {
    char name[100];
    float percentage;
    int age;
};

int main() {
    struct employee emp[5];
    struct employee *ptr = emp;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter Details for Employee %d\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", ptr + i.name);
        printf("Enter Percentage: ");
        scanf("%f", &ptr + i.percentage);
        printf("Enter Age: ");
        scanf("%d", &(ptr + i).age);
    }

    printf("\nEmployee Data\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("  Name       = %s\n", *(ptr + i).name);
        printf("  Percentage = %f\n", *(ptr + i).percentage);
        printf("  Age        = %d\n", *(ptr + i).age);
    }

    return 0;
}
