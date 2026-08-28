#include <stdio.h>

int main()
{
    float maths, chemistry, physics, english, computer, sum, percentage;
    printf("maths=");
    scanf("%f", &maths);
    printf("chemistry=");
    scanf("%f", &chemistry);
    printf("physics=");
    scanf("%f", &physics);
    printf("english=");
    scanf("%f", &english);
    printf("computer=");
    scanf("%f", &computer);
    sum = maths + chemistry + physics + english + computer;
    percentage = (sum) / 5;
    printf("percentage=%f", percentage);
    if (percentage >= 70)
    {
        printf("Class=Distinction");
    }
    else if (percentage >= 61)
    {
        printf("Class=First Class");
    }
    else if (percentage >= 46)
    {
        printf("Class=Second Class");
    }
    else if (percentage >= 36)
    {
        printf("Class=Pass Class");
    }
    else
    {
        printf("Class=Fail Class");
    }
    return 0;
}