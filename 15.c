#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long int i, sum;
    i=1l;sum=1;
    printf("\n");
    while(i < 11l) {
        sum=sum*2l;
        printf("2 ** %2ld = %5ld\n", i,sum);
        i++;
    }
    system("PAUSE");
    return 0;
}
