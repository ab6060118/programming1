#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,j,prime_flag,prime[100],number;
    printf("\n");
    prime[0]=2;
    prime[1]=3;
    for (i = 2; i < 100; ++i) {
        number=prime[i-1]+2;
        do {
            prime_flag=1;
            for(j=0;j<i&&prime_flag==1;j++)
                if (number%prime[j]==0)
                    prime_flag=0;
            if (prime_flag==1)
                prime[i]=number;
            else
                number=number+2;
        }while(prime_flag==0);
    }
    printf("The first 100 primes are :\n");
    for (i = 0; i < 100; ++i) {
        printf("%4d", prime[i]);
        if ((i+1)%10==0)
            printf("\n");
    }
    system("PAUSE");
    return 0;
}
