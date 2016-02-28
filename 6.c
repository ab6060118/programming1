#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int minute[4], i;
    float second[4],feet[4],km[4];
    printf("Input data (minute and second) :\n");
    for (i = 0; i < 4; ++i) {
        scanf("%d %f", &minute[i], &second[i]);
        km[i]=5280./3282./(minute[i]*60+second[i]);
        feet[i]=5280./(minute[i]*60+second[i]);
    }
    printf("\n");
    printf("----------------------------------------------\n");
    printf("  Minutes   Seconds   Speed(f/s)   Speed(km/s)\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < 4; ++i) {
        printf("     %d       %6.3f   ", minute[i], second[i]);
        printf("%10.3f       %6.4f    \n", feet[i], km[i]);
    }
    printf("----------------------------------------------\n");

    system("PAUSE");
    return 0;
}
