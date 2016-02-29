#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,input,quarter=0,dime=0,nickel=0;
    printf("Please input the change amount : ");
    scanf("%d",&input);
    for (i = 0; input>=25; quarter++) {
        input=input-25;
    }
    for (i = 0; input>=10; dime++) {
        input=input-10;
    }
    for (i = 0; input>=5; nickel++) {
        input=input-5;
    }
    printf("It need %2d quarters,\n", quarter);
    printf("    and %2d dimes,\n", dime);
    printf("    and %2d nickels,\n", nickel);
    printf("    and %2d pennies\n", input);
    system("PAUSE");
    return 0;
}
