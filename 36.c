#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    float salary[5],rate;
    printf("Input 5 salary :\n");
    for (i = 0; i < 5; ++i) {
        scanf("%f", &salary[i]);
    }
    printf("\n");
    printf("--------------------------\n");
    printf("  Salary  Pay_hike  Rate  \n");
    printf("--------------------------\n");
    for (i = 0; i < 5; ++i) {
        if (salary[i]>16500) {
            rate=0.07;
        }
        else if(salary[i]<14000) {
            rate=0.04;
        }
        else {
            rate=0.055;
        }
        printf("%8.2f%10.2f%6.3f\n", salary[i],rate*salary[i],rate);
    }
    printf("--------------------------\n");
    system("PAUSE");
    return 0;
}
