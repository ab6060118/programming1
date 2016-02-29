#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int left,right;
    double input,b,c;
    register i;
    printf("Please input a number with floating point : ");
    scanf("%lf",&input);

    c=modf(input,&b);

    for (i = 1; b>=10; i++) {
        b=b/10;
    }
    left=i;
    for (i = 0; c>(1e-8); i++) {
        c=10*c;
        c=modf(c,&b);
    }
    right=i;
    printf("%d digits at the left\n", left);
    printf("%d digits at the right\n", right);
    system("PAUSE");
    return 0;
}

