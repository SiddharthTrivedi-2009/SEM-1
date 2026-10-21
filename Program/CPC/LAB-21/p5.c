#include <stdio.h>
#include <string.h>
struct time
{
    int h, m, s, ttime;
};
void main()
{
    int n, i, temph = 0, tempm = 0, temps=0;
    printf("How Many size you want to enter ");
    scanf("%d",&n);
    struct time ttime[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Hour\n");
        scanf("%d", &ttime[i].h);
        printf("Enter Min\n");
        scanf("%d", &ttime[i].m);
        printf("Enter Sec\n");
        scanf("%d", &ttime[i].s);
    }
    for (i = 0; i < n; i++)
    {
        temph = temph + ttime[i].h;
        tempm = tempm + ttime[i].m;
        temps = temps + ttime[i].s;
    }
    for (; temps >= 60;)
    {
        if (temps>= 60)
        {
            tempm++;
            temps = temps - 60;
        }
    }
    for (; tempm >= 60;)
    {
        if (tempm>= 60)
        {
            temph++;
            tempm = tempm - 60;
        }
    }
    printf("Hour = %d\n", temph);
    printf("Min = %d\n", tempm);
    printf("Sec = %d", temps);
}