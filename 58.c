#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, number,prime[1000]={0},prime_flage;
    while(1) {
        printf("Please input a positive integer : ");
        scanf("%d", &number);
        prime_flage=1;
        for (i = 0; i < number-1; ++i)
            prime[i]=0;

        for (i = 1; i < number-1; ++i) {
            if (number%(i+1)==0) {
                prime[i]=1;
                prime_flage=0;
            }
        }

        if (prime_flage==1) {
            printf("This is a prime\n");
        }
        else {
            printf("The number will be divided by \n");
            for (i = 1; i < number-1; ++i) {
                if (prime[i]==1) {
                    printf("%d ", i+1);
                }
            }
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}
