// Time Problem
// Create a Time class to represent time in hours, minutes, and seconds.
// • Initialize Hr : Min : Sec using a constructor.
// • Create an AddSeconds(seconds) method to add the given seconds to the initialized time.
// • Create a SubtractSeconds(seconds) method to subtract the given seconds from the initial time.
// • Ensure proper time adjustment (60 seconds = 1 minute, 60 minutes = 1 hour).
// • Print the time in Hr:Min:Sec format.
#include <stdio.h>
void main()
{
    int hr, min, sec, addsec, subsec;

    printf("Enter Hour : ");
    scanf("%d", &hr);

    printf("\nEnter Min : ");
    scanf("%d", &min);

    printf("\nEnter Sec : ");
    scanf("%d", &sec);

    printf("\nHow Much Sec You Want To Add : ");
    scanf("%d", &addsec);

    printf("\nHow Much Sec You Want To Substract : ");
    scanf("%d", &subsec);

    sec = sec + addsec - subsec;
    
    while (sec > 60 || min > 60)
    {
        if (sec >= 60)
        {
            min++;
            sec = sec - 60;
        }
        if (min >= 60)
        {
            hr++;
            min = min - 60;
        }
    }

    printf("\n%d : %d : %d", hr, min, sec);
}