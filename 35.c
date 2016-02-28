#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i;
    float salary[5],sum=0;
    printf("Input 5 salary :\n");
    for (i = 0; i < 5; ++i) {
        scanf("%f", &salary[i]);
    }
    printf("\n");
    printf("--------------------------------------------------\n");
    printf("  Salary  Pay_hike  Total Salary  Total Pay_hike  \n");
    printf("--------------------------------------------------\n");
    for (i = 0; i < 5; ++i) {
        sum=sum+0.055*salary[i];
        printf("%8.2f%10.2f%14.2f%16.2f\n", salary[i],0.055*salary[i],1.055*salary[i],sum);
    }
    printf("--------------------------------------------------\n");
    system("PAUSE");
    return 0;
}
