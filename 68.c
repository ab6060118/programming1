#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    float number,big,small,total=0,square_sum=0;
    int i;
    printf("Please input 10 number : \n");
    for (i = 0; i < 10; ++i) {
        scanf("%f",&number);
        if (i==0) {
            big=number;
            small=number;
        }
        small=number<small?number:small;
        big=number>big?number:big;
        total+=number;
        square_sum+=number*number;
    }
    printf("The standard diviation is : %10.4f\n", sqrt((square_sum-total*total/i)/(i-1)));
    printf("The maximum number is     : %10.4f\n",big);
    printf("The minimum number is     : %10.4f\n",small);
    printf("The average number is     : %10.4f\n",total/i);
    system("PAUSE");
    return 0;
}
