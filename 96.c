#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
float asctoloat(char *);
int main(void)
{
    char snum1[20],snum2[20];
    float f1,f2;
    printf("\n");
    printf("Please input two number by scientific notation\n ==>");
    scanf("%s %s",snum1,snum2);
    f1=asctoloat(snum1);
    f2=asctoloat(snum2);
    printf("\n");
    printf("*** %s + %s = %.4f\n", snum1,snum2,f1+f2);
    printf("*** %s - %s = %.4f\n", snum1,snum2,f1-f2);
    printf("*** %s * %s = %.4f\n", snum1,snum2,f1*f2);
    printf("*** %s / %s = %.4f\n", snum1,snum2,f1/f2);
    printf("\n");
    system("PAUSE");
    return 0;
}

float asctoloat(char *string) {
    int base=0,sign,esign,i;
    double power,val=0;
    if(*string=='-') {
        sign=-1;
        string++;
    }
    else {
        sign=1;
    }
    while(*string!='.')
        string++;
    string++;
    for (power = 1; *string>='0'&&*string<='9'; string++) {
        val=val*10+(*string-'0');
        power=power*10;
    }
    val=val/power*sign;
    if (toupper(*string)=='E') {
        string++;
        if (*string=='-') {
            esign=-1;
            string++;
        }
        else {
            esign=1;
        }
        for (base = 0; *string>='0'&&*string<='9'; string++) {
            base=10*base+(*string-'0');
        }
    }
    for (i = 0; i < base; ++i) {
        if (esign==1) {
            val=val*10;
        }
        else {
            val=val/10;
        }
    }

    return val;
}
