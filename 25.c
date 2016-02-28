#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ele, year=10, amount=1;
    float elc, total=0;
    printf("--------------------------------------------------------------\n");
    printf("  Amount    Life    Elec._Pay    Elementary_Pay    Total_Pay  \n");
    printf("--------------------------------------------------------------\n");

    while(1) {
        ele=amount*6000;
        elc=amount*10*420*0.047;
        total=ele+elc;
        if (total > 50000) {
            break;
        }
        printf("%5d%9d%15.2f%18d%13.2f\n", amount,year,elc,ele,total);
        printf("--------------------------------------------------------------\n");
        amount++;
    }

    system("PAUSE");
    return 0;
}
