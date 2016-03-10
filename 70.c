#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    FILE *in;
    float a[20],b[20],c[20];
    double sqz,sum=0;
    int i;

    in=fopen("70.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        for (i = 0; i < 20; ++i) {
            fscanf(in,"%f %f",&a[i],&b[i]);
            c[i]=a[i]*b[i];
            sum+=c[i];
        }
        sqz=sqrt(sum);
        printf("\n");
        printf("              A[i]        B[i]        C[i]  \n");
        printf("--------------------------------------------\n");
        for (i = 0; i < 20; ++i) {
            printf("i = %2d%12.4f%12.4f%12.4f\n",i+1,a[i],b[i],c[i]);
        }
        printf("--------------------------------------------\n");
        printf("The square root of sum of array C is : %f\n", sqz);
    }
    system("PAUSE");
    return 0;
}
