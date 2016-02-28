#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int init[3],cmu[3],i;
    float rate,gross[3];
    printf("Input data <intial_time communicated_time> :\n");
    for (i = 0; i < 3; ++i) {
        scanf("%d %d", &init[i],&cmu[i]);
        rate = init[i]>1800 || init[i]<800 ? 0.5 : 1.0;
        rate = cmu[i]>60 ? rate*0.85 : rate;
        gross[i]=cmu[i]*rate;
    }
    printf("\n");
    printf("  Initial_Time    Communicated_T.    Gross_Pay    Net_Pay  \n");
    printf("===========================================================\n");
    for (i = 0; i < 3; ++i) {
        printf("%12d%13d%19.2f%13.2f\n", init[i],cmu[i],gross[i],gross[i]*1.04);
    }
    printf("===========================================================\n");
    system("PAUSE");
    return 0;
}
