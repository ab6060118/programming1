#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float number,big;
    int i,index;
    printf("Please input 20 number : \n");
    for (i = 0; i < 20; ++i) {
        scanf("%f",&number);
        if (i==0) {
            big=number;
            index=i;
        }
        if (number>big) {
            big=number;
            index=i;
        }
    }
    printf("The largest number in array A is : \n");
    printf("A[%d] ===> %.2f\n",index+1,big);
    printf("\n");
    system("PAUSE");
    return 0;
}
