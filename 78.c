#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    int i,j,number[20],income[20],fam[20];
    float avg=0,poor=0;
    printf("\n");
    in=fopen("78.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        printf("  ID NO.  Annual Incom  Families\n");
        printf("----------------------------------\n");
        for (i = 0; fscanf(in,"%d %d %d",&number[i],&income[i],&fam[i])!=EOF; ++i) {
            avg+=income[i];
            if(income[i]<6500+750*(fam[i]-2))
                poor++;
            printf("%8d%14d%10d\n", number[i],income[i],fam[i]);
        }
        avg=avg/i;
        poor=poor/i;
        printf("\n");
        printf("The ID No. of families which annual income exceeds average (%0.3f)\n", avg);
        printf("\n");
        for (j = 0; j < i; ++j) {
            if(income[j]>avg)
                printf("%d\n", number[j]);
        }
        printf("\n");
        printf("The poverty rate is %.3f\n", poor);
    }
    system("PAUSE");
    return 0;
}
