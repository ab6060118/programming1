#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i,relNo[3];
    float salay[3],prepay[3],exp[3];
    char message[20];
    printf("Input data <salay rel_number tax_prepay> :\n");
    for (i = 0; i < 3; ++i) {
        scanf("%f %d %f", &salay[i], &relNo[i], &prepay[i]);
        exp[i] = salay[i]*0.04-relNo[i]*500;
    }
    printf("\n");
    printf("--------------------------------------------------------\n");
    printf("  Salay    Rel.NO    Tax_Prepay    Tax_Exp.    Message  \n");
    printf("--------------------------------------------------------\n");
    for (i = 0; i < 3; ++i) {
        prepay[i] > exp[i] ? strcpy(message,"Send Check") : strcpy(message, "Refund");
        printf("%7.2f%7d%17.2f%12.2f%12s\n", salay[i],relNo[i],prepay[i],exp[i],message);
    }
    printf("--------------------------------------------------------\n");
    system("PAUSE");
    return 0;
}
