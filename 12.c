#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    float house_price[3],fuel_expense[3],rate[3],total[3];
    printf("Input data (House Price, Fuel Expense and Rate) :\n");
    for (i = 0; i < 3; ++i) {
        scanf("%f %f %f", &house_price[i], &fuel_expense[i], &rate[i]);
        total[i]=house_price[i]+5*fuel_expense[i]+5*rate[i]*house_price[i];
    }
    printf("\n");
    printf("----------------------------------------------------\n");
    printf("House_Price    Fuel_Expense    Rate    Total Expense\n");
    printf("----------------------------------------------------\n");
    for (i = 0; i < 3; ++i) {
        printf(" %10.3f      %10.3f  %7.3f      %10.3f\n", house_price[i], fuel_expense[i], rate[i], total[i]);
    }
    printf("----------------------------------------------------\n");
    system("PAUSE");
    return 0;
}
