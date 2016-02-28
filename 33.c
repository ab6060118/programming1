#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,num,big,small;
    float total=0;
    for (i = 0; i < 5; ++i) {
        printf("Input data :\n");
        scanf("%d", &num);
        if (i==0) {
            big=num;
            small=num;
        }
        big=num>big?num:big;
        small=num<small?num:small;
        total=total+num;
    }
    printf("The Biggest Data Is %d\n", big);
    printf("The Smallest Data Is %d\n", small);
    printf("The Average Of Datas Is %f\n", total/i);
    system("PAUSE");
    return 0;
}
