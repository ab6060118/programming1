#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,day[3];
    float star[3],rate[3],total[3];
    printf("Input 3 data <startbal rate n>:\n");
    for (i = 0; i < 3; ++i) {
        scanf("%f %f %d",&star[i],&rate[i],&day[i]);
        total[i]=star[i];
        for (j = 0; j < day[i]; ++j) {
            total[i]=total[i]*(1+rate[i]/365);
        }
    }
    printf("\n");
    printf("------------------------------------------------\n");
    printf("  No.  Startbal  Day(s)     Rate  Total_Saving  \n");
    printf("------------------------------------------------\n");
    for (i = 0; i < 3; ++i) {
        printf("%5d%10.2f%8d%8.3f%%%14.2f\n", i+1,star[i],day[i],rate[i],total[i]);
    }
    printf("------------------------------------------------\n");
    system("PAUSE");
    return 0;
}
