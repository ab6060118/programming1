#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i=1,sum=1;
    float result,total=0;
    printf("-------------------------------------------\n");
    printf("  Index  Fraction        Value        Sum  \n");
    printf("-------------------------------------------\n");
    while(i<=10) {
        sum=sum*2;
        result=1.0/sum;
        total=total+result;
        printf("%7d%3d /%5d%13f%11f\n", i,1,sum,result,total);
        i++;
    }
    printf("-------------------------------------------\n");
    system("PAUSE");
    return 0;
}
