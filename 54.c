#include <stdio.h>
#include <stdlib.h>
float avg(float);
int main(void)
{
    int i;
    float sum=0,data[10],big,small;
    printf("Please input 10 numvers :\n");
    for (i = 1; i < 11; ++i) {
        printf("Number %d : ", i);
        scanf("%f",&data[i]);
        sum=sum+data[i];
        if (i==1) {
            big=data[i];
            small=data[i];
        }
        big=data[i]>big?data[i]:big;
        small=data[i]<small?data[i]:small;
    }
    printf("The largest number is : %.0f\n", big);
    printf("The smallest number is : %.0f\n", small);
    printf("The average number is : %f\n", avg(sum));
    system("PAUSE");
    return 0;
}

float avg(float sum) {
    return sum/10;
}
