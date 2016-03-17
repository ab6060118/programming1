#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float tax_table[3][17]={{0,0,154,314,692,1072,1555,2059,2605,3565,5467,7434,9766,13392,20982,37677,55697},
                            {0,0.14,0.16,0.18,0.19,0.21,0.24,0.26,0.30,0.34,0.39,0.44,0.49,0.55,0.63,0.68,0.70},
                            {0,2300,3400,4400,6500,8500,10800,12900,15000,18200,23500,28800,34100,41500,55300,81800,108300}}, income, tax;
    int i;
    printf("\n");
    printf("Please input the income : ");
    scanf("%f",&income);
    for (i = 0; i < 17; ++i) {
        if(income<tax_table[2][i])
            break;
    }
    i--;
    tax=tax_table[0][i]+tax_table[1][i]*(income-tax_table[2][i]);
    printf("\n");
    printf("The total income : %.2f\n", income);
    printf("The tax payable : %.2f\n", tax);
    system("PAUSE");
    return 0;
}
