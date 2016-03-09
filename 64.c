#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float total_pay,rate,month_pay;
    int year;
    printf("  Rate     Duration  Monthly   total  \n");
    printf("(Percent)   (Years)  Payment  Payment \n");
    for (rate = 10; rate <= 14; rate=rate+0.25) {
        total_pay=1000+1000*rate/100;
        for (year = 20; year <= 30; year=year+5) {
            month_pay=total_pay/year/12;
            printf("%9.2f%10d%9.2f%9.2f\n", rate,year,month_pay,total_pay);
        }
    }
    system("PAUSE");
    return 0;
}
