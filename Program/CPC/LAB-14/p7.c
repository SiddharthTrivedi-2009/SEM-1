#include <stdio.h>
int main()
{
    int n, i, sum = 0, avg, mul = 1, gm;
    float temp = 0.0, hm;
    printf("N=");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        mul = mul * a[i];
    }
    avg = sum / n;
    gm = mul / n;
    for (i = 0; i < n; i++)
    {
        temp = temp + (1.0 / a[i]);
    }
    hm = ((float)n) / temp;
    printf("avg=%d\n", avg);
    printf("Geomatric Mean=%d\n", gm);
    printf("Harmonic Mean=%f", hm);

    return 0;
}