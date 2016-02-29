#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void find_decrease();
int main(void)
{
    float pi=3.1415926535,deg;
    double x,sinx,cosx;
    long int subscr;
    int i,j;
    char sincos[21][78];
    find_decrease();
    deg=(2*pi)/78;
    x=0;
    for (i = 0; i < 21; ++i) {
    sin(x);
        for (j = 0; j < 78; ++j) {
            sincos[i][j]=' ';
        }
    }
    for (i = 0; x < (2*pi); ++i) {
        sinx=sin(x);
        cosx=cos(x);
        subscr=sinx*10+10;
        sincos[subscr][i]='s';
        subscr=cosx*10+10;
        sincos[subscr][i]='c';
        x=x+deg;
    }

    printf("\n");
    for (i = 0; i < 28; ++i) {
        printf("-");
    }
    printf("   Sin & Cos curve    ");
    for (i = 0; i < 28; ++i) {
        printf("-");
    }
    printf("\n");

    for (i = 20; i >= 0; i--) {
        for (j = 0; j < 78; ++j) {
            printf("%c", sincos[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 78; ++i) {
        printf("%c", '-');
    }

    printf("\n s: Sin ; C : Cos    (From 0 to 2*pi ))\n");

    system("PAUSE");
    return 0;
}

void find_decrease()
{
    double x=0,old_sinx=0,sinx,delta=1;
    int count=0,i;
    for (i = 0; i < 4; ++i) {
        printf("   x      Sin(X) |");
    }
    printf("\n");
    for (i = 0; i < 72; ++i) {
        printf("-");
    }
    printf("\n");
    do {
        sinx=sin(x);
        delta=sinx-old_sinx;
        old_sinx=sinx;
        printf("%7.4f%9.4f |", x,sinx);
        count++;
        if (count==4) {
            printf("\n");
            count=0;
        }
        x=x+0.01;
    } while (delta>=0);
    printf("\n\nSin curve begins to decrease at X = %6.4f \n\n", x-0.01);
}
