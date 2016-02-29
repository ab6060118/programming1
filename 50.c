#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *in;
    float rate,rate1,rate2,avg;
    int grade,grade1,grade2,no;
    char level[3];

    in=fopen("50.txt","r");

    if (!in) {
        printf("Can't Find Any Information!!!\n");
    }
    else {
        printf("Please Input The First Rate :");
        scanf("%f",&rate);
        printf("Please Input The Second Rate :");
        scanf("%f",&rate1);
        printf("Please Input The Third Rate :");
        scanf("%f",&rate2);

        printf("---------------------------------------------------\n");
        printf("  Reg.No.  Score1  Score2  Score3  Average  Grade  \n");
        printf("---------------------------------------------------\n");
        while(fscanf(in,"%d %d %d %d", &grade,&grade1,&grade2,&no)!=EOF) {
            avg=grade*rate+grade1*rate1+grade2*rate2;
            if (avg>=90) {
                strcpy(level,"A");
            }
            else if (avg>=80) {
                strcpy(level,"B");
            }
            else if (avg>=70) {
                strcpy(level,"C");
            }
            else if (avg>=60) {
                strcpy(level,"D");
            }
            else {
                strcpy(level,"F");
            }
            printf("%9d%8d%8d%8d%9.2f%7s\n", no,grade,grade1,grade2,avg,level);
        }
        printf("---------------------------------------------------\n");
    }

    system("PAUSE");
    return 0;
}
