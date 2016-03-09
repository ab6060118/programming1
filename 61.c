#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float m,b;
    while(1) {
        printf("Please input m and b (mx+b=0) : ");
        scanf("%f %f",&m,&b);
        if (m==0&&b==0) {
            printf("m=%-12.6fb=%-12.6f  Any real number\n",m,b);
        }
        else {
            if (m==0&&b!=0) {
                printf("m=%-12.6fb=%-12.6f  No solution\n",m,b);
            }
            else {
                printf("m=%-12.6fb=%-12.6fx=%-12.6f\n",m,b,-b/m);
            }
        }
    }
    system("PAUSE");
    return 0;
}
