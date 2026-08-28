#include <stdio.h>

int main()
{
    float bs, gs, hra, da;
    printf("bs=");
    scanf("%f", &bs);
    if (bs >= 30000)
    {
        da = (0.95) * bs;
        hra = (0.3) * bs;
        gs = hra + da;
        printf("gs=%f", gs);
    }
    else if (bs >= 20000)
    {
        da = (0.9) * bs;
        hra = (0.25) * bs;
        gs = hra + da;
        printf("gs=%f", gs);
    }
    else if (bs >= 10000)
    {
        da = (0.8) * bs;
        hra = (0.2) * bs;
        gs = hra + da;
        printf("gs=%f", gs);
    }
    else
    {
        printf("unavailable");
    }
    return 0;
}