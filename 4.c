#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float x,y,z,sum;
    printf("X = Y = Z = ?\n");
    scanf("%f %f %f", &x,&y,&z);
    sum=x+y+z;
    printf("The Sum Is %f\n", sum);

    system("PAUSE");
    return 0;
}
