#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int i;
    float data[] = {4, 120.5, 88, 36.01, 10000}, lg, ng, temp;

    printf("\n");
    printf("        N           LG          NG  \n");
    printf("====================================\n");

    for (i = 0; i < 5; ++i) {
        printf("%10.2f\n", data[i]);
        printf("----------\n");

        lg=0.1;
        ng=0;
        temp=1.0;

        while(fabs(temp)>0.005) {
            ng=0.5*(lg+data[i]/lg);
            printf("%23.4f%13.4f\n",lg,ng);
            temp=ng-lg;
            lg=ng;
        }
    }

    printf("====================================\n");

    system("PAUSE");
    return 0;
}
