#include <stdio.h>
int main(void)
{
    int i;
    float mpg[4],tanksize[4],total[4];
    printf("Input data (MPG and TANKSIZE) :\n");
    for (i = 0; i < 4; ++i) {
        scanf("%f %f", &mpg[i], &tanksize[i]);
        total[i]=mpg[i]*tanksize[i];
    }
    printf("\n");
    printf("---------------------------------\n");
    printf("    MPG    TANKSIZE    TOTAL MILE\n");
    printf("---------------------------------\n");
    for (i = 0; i < 4; ++i) {
        printf("%10.3f%10.3f%10.3f\n", mpg[i], tanksize[i], total[i]);
    }
    printf("---------------------------------\n");
    return 0;
}
