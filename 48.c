#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    char month[20];
    int i;
    float curr,pre,ctotal=0,ptotal=0;
    in=fopen("48.txt","r");
    if (!in) {
        printf("Can't Find Any Information!!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%s %f %f",month,&curr,&pre)!=EOF) {
            printf("\n%-11s!",month);
            ctotal=ctotal+curr;
            for (i = 0; i < curr*10/2; ++i) {
                printf("*");
            }
            printf("\n%-11s!", "");
            ptotal=ptotal+pre;
            for (i = 0; i < pre*10/2; ++i) {
                printf("%%");
            }
        }
        printf("\n%-11s!----1----2----3----4----5 ...\n", "");
        printf("\n");
        printf("* - average rainfall for given month.\n");
        printf("%% - previous year's rainfall for given month.\n");
        printf("\n");
        printf("Total Rainfall For Past Year Is %.2f\n", ptotal);
        printf("tHe Average Of Two Years's Rainfall Is %.2f\n", (ctotal+ptotal)/2);
        printf("The Difference Vetween The Answer Is %.2f\n", -(ctotal-ptotal));
    }
    system("PAUSE");
    return 0;
}
