#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name[3][20];
    float rate[3], netPay[3], grossPay[3], netTotal=0, grossTotal=0;
    int time[3], i;

    printf("Input data <name rate time> :\n");
    for (i = 0; i < 3; ++i) {
        scanf("%s %f %d", name[i], &rate[i], &time[i]);
        if (time[i]>40) {
            grossPay[i]=40.0*rate[i]+(time[i]-40)*rate[i]*1.5;
        }
        else {
            grossPay[i]=time[i]*rate[i];
        }
        netPay[i]=grossPay[i]*0.65;
        netTotal=netTotal+netPay[i];
        grossTotal=grossTotal+grossPay[i];
    }
    printf("\n");
    printf("    Name    Net Pay    Gross Pay    \n");
    printf("====================================\n");
    for (i = 0; i < 3; ++i) {
        printf("%8s%11.3f%12.3f\n", name[i], netPay[i], grossPay[i]);
    }
    printf("====================================\n");
    printf("Total Gross Pay Is%8.2f\n", grossTotal);
    printf("Total Net Pay Is%10.2f\n", netTotal);
    system("PAUSE");
    return 0;
}
