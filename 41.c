#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    char fname[20],lname[20];
    float rate,gross,net,totalGross=0;
    int hours;
    in=fopen("41.txt","r");
    if (!in) {
        printf("Can't Find Any Information!!!\n");
        return 1;
    }
    else {
        printf("------------------------------------------------------\n");
        printf("  FirstName  LastName  Rate  Hour(s)  Gross      Net  \n");
        printf("------------------------------------------------------\n");
        while(fscanf(in,"%s %s %f %d",fname,lname,&rate,&hours)!=EOF) {
            gross=hours>40?1.5*rate*(hours-40)+40*rate:rate*hours;
            net=gross>65?gross-(15+0.45*gross):gross;
            totalGross=totalGross+gross;
            printf("%11s%10s%6.2f%9d%7.2f%9.2f\n",fname,lname,rate,hours,gross,net);
        }
        printf("------------------------------------------------------\n");
        printf("Total Gross Is %.2f\n", totalGross);
    }
    system("PAUSE");
    return 0;
}
