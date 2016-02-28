#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long int n,i=1,fast=0,slow=0;

    printf("Plaest Input N :\n");
    scanf("%ld", &n);

    for (i = 0; i <= n; ++i) {
        slow=slow+i;
    }

    fast=(n+1)*n/2;

    printf("SLOW = %ld\n", slow);
    printf("FAST = %ld\n", fast);


    system("PAUSE");
    return 0;
}
