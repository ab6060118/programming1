#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float hourPay,net[3];
    int i,no[3],time;

    printf("Input data <member_no pay work_hour> :\n");
    for (i = 0; i < 3; ++i) {
        scanf("%d %f %d", &no[i],&hourPay,&time);
        if (time>40) {
            net[i]=40*hourPay+(time-40)*1.5*hourPay;
        }
        else
            net[i]=time*hourPay;

        net[i]=net[i]*0.9635;
    }

    printf("\n");
    printf("  Member No.    Net Pay  \n");
    printf("=========================\n");

    for (i = 0; i < 3; ++i) {
        printf("%10d%13.3f\n", no[i],net[i]);
    }

    printf("=========================\n");

    system("PAUSE");
    return 0;
}
