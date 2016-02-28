#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fi,*in;
    int good1,good,no;
    char data[20],sale[10];
    in=fopen("32.txt", "r");
    if (!in) {
        printf("Can't find any information!!\n");
        return 1;
    }
    else {
        printf("\n");
        printf("      Good  Initial_Inv  No.  Exchange  Last_Inv.  \n");
        printf("===================================================\n");
        while(fscanf(in,"%s %d %s",sale,&good1,data) != EOF) {
            printf("%10s%13d\n", sale,good1);
            fi=fopen(data,"r");
            while(fscanf(fi,"%d %d", &no,&good)!=EOF) {
                good1=good1+good;
                printf("%28d%10d\n", no,good);
            }
            printf("%49d\n", good1);
            printf("%51s\n", "--------");
        }
        printf("===================================================\n");
    }

    system("PAUSE");
    return 0;
}
