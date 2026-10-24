#include <stdio.h>
#include <string.h>
struct size
{
    int i, f, sum;
};
void main()
{
    int n, i, tempf = 0, tempi = 0;
    printf("How Many size you want to enter ");
    scanf("%d", &n);
    struct size sum[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Feet\n");
        scanf("%d", &sum[i].f);
        printf("Enter Inch\n");
        scanf("%d", &sum[i].i);
    }
    for (i = 0; i < n; i++)
    {
        tempf = tempf + sum[i].f;
        tempi = tempi + sum[i].i;
    }
    for (; tempi >= 12;)
    {
        if (tempi >= 12)
        {
            tempf++;
            tempi = tempi - 12;
        }
    }
    printf("Feet = %d\n", tempf);
    printf("Inch = %d", tempi);
}