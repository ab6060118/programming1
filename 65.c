#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    float a,b,c,root1,root2,d;
    while(1) {
        printf("\nPlease input data a, b and c (ax^2+bx+c=0) : ");
        scanf("%f %f %f",&a,&b,&c);
        d=b*b-4*a*c;
        printf("a=%3.3f  b=%3.3f  c=%3.3f  ",a,b,c);
        if (d>0) {
            root1=(-b+sqrt(d))/2/a;
            root2=(-b-sqrt(d))/2/a;
            printf("Root1=%3.3f  Root2=%3.3f",root1,root2);
        }
        else {
            if(d==0) {
                root1=(-b+sqrt(d))/2/a;
                printf("Root1=%3.3f  Root2=%3.3f",root1,root1);
            }
            else {
                printf("No real solutions");
            }
        }
    }
    system("PAUSE");
    return 0;
}
