#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long int i=1,sum=1;
    while(i!=0) {
        sum=sum*i;
        printf("Input data <until data=0> :\n");
        scanf("%ld", &i);
    }
    printf("The Result is %ld\n", sum);
    system("PAUSE");
    return 0;
}
