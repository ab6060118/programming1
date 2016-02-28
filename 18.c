#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int no[4], minute[4], i, temp[4], j=0;
    float second[4],feet[4],km[4];
    printf("Input data (no minute second) :\n");
    for (i = 0; i < 4; ++i) {
        scanf("%d %d %f", &no[i], &minute[i], &second[i]);
        km[i]=5280./3282./(minute[i]*60+second[i]);
        feet[i]=5280./(minute[i]*60+second[i]);
    }
    printf("\n");
    printf("---------------------------------------------------\n");
    printf("  No.  Minutes   Seconds   Speed(f/s)   Speed(km/s)\n");
    printf("---------------------------------------------------\n");
    for (i = 0; i < 4; ++i) {
        printf("%4d%8d%12.3f",no[i], minute[i], second[i]);
        printf("%13.3f%14.4f\n", feet[i], km[i]);
        if(minute[i] < 4) {
            temp[j++] = no[i];
        }
    }
    printf("---------------------------------------------------\n");
    printf("\n");
    printf("The ");
    for (i = 0; i < j; ++i) {
        printf("%d's,", temp[i]);
    }
    printf(" Team(s) Finish One_Maile_Run Inside 4 Minutes\n");

    system("PAUSE");
    return 0;
}
