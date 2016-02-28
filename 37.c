#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    float data[5],total=0;

    printf("Input 5 data :\n");
    for (i = 0; i < 5; ++i) {
        scanf("%f", &data[i]);
    } 
    printf("\n");
    printf("---------------------------------------\n");
    printf("  Belonging  Tax Payable  Tax Expense  \n");
    printf("---------------------------------------\n");
    for (i = 0; i < 5; ++i) {
        printf("%11.2f%13.2f%13.2f\n", data[i],data[i]*0.125,data[i]*0.125*0.28);
        total=total+data[i]*0.125*0.28;
    }
    printf("---------------------------------------\n");
    printf("Total Tax Payment Is %f\n", total);

    system("PAUSE");
    return 0;
}
