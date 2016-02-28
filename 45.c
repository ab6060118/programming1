#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    float rate=0.065/4,interest,inverstment=0,new_amount=0,total_saving=0;

    printf("----------------------------------------------------------\n");
    printf("  Month  Investment  New Amount  Interest  Total Savings\n");
    printf("----------------------------------------------------------\n");

    for (i = 1; i <= 60; ++i) {
        interest=0.;
        inverstment=inverstment+50;
        new_amount=total_saving+50;
        if (i%3==0) {
            interest=new_amount*rate;
        }
        total_saving=new_amount+interest;
        printf("%7d%12.2f%12.2f%10.2f%14.2f\n", i,inverstment,new_amount,interest,total_saving);
    }

    printf("----------------------------------------------------------\n");

    system("PAUSE");
    return 0;
}
