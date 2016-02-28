#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    unsigned long long  n,i=1l,sum=1l;
    printf("Please Input N : <1..20>\n");
    scanf("%llu", &n);
    while(i<=n) {
        sum=sum*i;
        i++;
    }
    printf("N = %llu\n", n);
    printf("N! = %llu\n", sum);
    system("PAUSE");
    return 0;
}
