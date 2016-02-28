#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, n[4], flag;
    float x[4], result[4];
    printf("Input data <X N>: \n");

    for (i = 0; i < 4; ++i) {
        result[i]=1;
        scanf("%f %d", &x[i], &n[i]);

        if(n[i] < 0) {
            flag = 1;
            n[i] = -n[i];
        }

        for (j = 0; j < n[i]; ++j) {
            result[i]=result[i]*x[i];
        }

        if (flag) {
            result[i]=1/result[i];
            flag = 0;
        }
    }

    printf("\n");
    printf("------------------------\n");
    printf("    X    N      X**N    \n");
    printf("------------------------\n");

    for (i = 0; i < 4; ++i) {
        printf("%5.1f%5d%12.3f\n", x[i], n[i], result[i]);
    }

    printf("----------------------\n");


    system("PAUSE");
    return 0;
}
