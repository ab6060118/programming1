#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, temp[4];
    float mpg[4],tanksize[4],total[4];
    printf("Input data (MPG and TANKSIZE) :\n");
    for (i = 0; i < 4; ++i) {
        scanf("%f %f", &mpg[i], &tanksize[i]);
        total[i]=mpg[i]*tanksize[i];
        if (total[i] < 300)
            temp[i]=1;
        else
            temp[i]=0;
    }
    printf("\n");
    printf("--------------------------------------------\n");
    printf("    MPG    TANKSIZE    TOTAL MILE    MASSAGE\n");
    printf("--------------------------------------------\n");
    for (i = 0; i < 4; ++i) {
        printf("%7.3f%12.3f%14.3f", mpg[i], tanksize[i], total[i]);
        if (temp[i])
            printf("%11s\n", "Out Of Gas");
        else
            printf("%11s\n", "All The WaY");
    }
    printf("--------------------------------------------\n");
    system("PAUSE");
    return 0;
}
