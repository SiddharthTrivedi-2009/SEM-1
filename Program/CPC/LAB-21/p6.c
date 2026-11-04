#include <stdio.h>
#include <string.h>

union employee
{
    char name;
    float percentage;
    int age;
};

int main()
{
    union employee emp[5];
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Employee %d Data\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);
        printf(" Stored Name: %s\n", emp[i].name);

        printf("Enter Percentage: ");
        scanf("%f", &emp[i].percentage);
        printf(" Stored Percentage: %f\n", emp[i].percentage);

        printf("Enter Age: ");
        scanf("%d", &emp[i].age);
        printf(" Stored Age: %d\n", emp[i].age);
    }

    return 0;
}
