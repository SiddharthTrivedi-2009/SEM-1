#include <stdio.h>
#include <string.h>
struct employee
{
    int id;
    char name[100];
    float salary;
    char department[100];
};
void main()
{
    struct employee emp1;
    printf("Enter Id");
    scanf("%d", &emp1.id);
    printf("Enter Name");
    scanf("%s", emp1.name);
    printf("Enter Salary");
    scanf("%f", &emp1.salary);
    printf("Enter Department");
    scanf("%s", emp1.department);
    struct employee emp2 = {101, "Siddharth", 100000.0, "Computer"};
    printf("Employee 1\n");
    printf("Id=%d\n Name=%s\n Salary=%f\n Department=%s\n", emp1.id, emp1.name, emp1.salary, emp1.department);
    printf("Employee 2\n");
    printf("Id=%d\n Name=%s\n Salary=%f\n Department=%s\n", emp2.id, emp2.name, emp2.salary, emp2.department);
}