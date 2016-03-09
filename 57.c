#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *in;
    int i;
    long int amt,credit[3][3]={0},total_amt=0,total_wage=0,total_item=0;
    char name[10],made[10],dat[5];
    static char col_name[3][10] = {{"JAME_WANG"},{"MARY_LEE"},{"JOHN_CHEN"}};

    in=fopen("57.txt","r");
    if(!in) {
        printf("Can't Find Any Information!!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%s %s %s %ld",name,made,dat,&amt)!=EOF) {
            for (i = 0; i < 3; ++i) {
                if (!strcmp(name,col_name[i])) {
                    credit[i][0]++;
                    total_item++;
                    credit[i][1]=credit[i][1]+amt;
                    total_amt=total_amt+amt;
                }
            }
        }
        printf("\n");
        printf("      Name  Sold  SoldAmt  Wages  \n");
        printf("----------------------------------\n");
        for (i = 0; i < 3; ++i) {
            if (credit[i][1]<30000) {
                credit[i][2]=30000*0.05;
                total_wage=total_wage+credit[i][2];
            }
            else {
                if (credit[i][1]<50000) {
                    credit[i][2]=30000*0.05+(credit[i][1]-30000)*0.08;
                    total_wage=total_wage+credit[i][2];
                }
                else {
                    credit[i][2]=30000*0.05+20000*0.08+(credit[i][1]-50000)*0.15;
                    total_wage=total_wage+credit[i][2];
                }
            }
            printf("%10s%6ld%9ld%7ld\n", col_name[i],credit[i][0],credit[i][1],credit[i][2]);
        }
        printf("----------------------------------\n");
        printf("%10s%6ld%9ld%7ld\n", "Total",total_item,total_amt,total_wage);
    }

    system("PAUSE");
    return 0;
}
