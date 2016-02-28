#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fi,*in;
    int clock[5][24]={0},time,j,i=0;
    char medi[5][20], data[20];

    in=fopen("38.txt","r");
    if(!in) {
        printf("Can't Find Any Information!!!\n");
    }
    else {
        while(fscanf(in,"%s %s", medi[i],data)!=EOF) {
            fi=fopen(data,"r");
            while(fscanf(fi,"%d",&time) != EOF) {
                clock[i][time/100]=1;
            }
            i++;
        }
        fclose(fi);
    }
    fclose(in);

    printf("\n");
    printf("  Clock  --------Medicine--------  \n");
    printf("===================================\n");

    for (i = 0; i < 24; ++i) {
        printf("   %04d  ", i*100);
        for (j = 0; j < 4; ++j) {
            if (clock[j][i]) {
                printf("%s, ", medi[j]);
            }
        }
        printf("\n");
    }   
    printf("===================================\n");

    system("PAUSE");
    return 0;
}
