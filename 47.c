#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    int i,month,no=1;
    float money,rate,temp,payment,total;
    in=fopen("47.txt","r");
    if (!in) {
        printf("Can't Find Any Information!!!\n");
        return 1;
    }
    else {
        printf("------------------------------------------------------\n");
        printf("  No.  Backloan  Month  Rate  Payment  Total_Payment  \n");
        printf("======================================================\n");
        while(fscanf(in,"%f %d %f",&money,&month,&rate)!=EOF) {
            temp=1;
            for (i = 0; i < month; ++i) {
                temp=temp*(1+rate/1200);
            }
            payment=(rate/1200*temp*money)/(temp-1);
            total=payment*month;
            printf("%5d%10.2f%7d%5.1f%%%9.2f%15.2f\n", no++,money,month,rate,payment,total);
        }
        printf("------------------------------------------------------\n");
    }
    system("PAUSE");
    return 0;
}
