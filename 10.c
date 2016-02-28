#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ph_pi,pi_st,st_da,ph_at,at_ne,ne_da;
    int mile1,mile2;
    ph_pi=300;pi_st=600;st_da=375;ph_at=1000;at_ne=250;ne_da=200;
    mile1=ph_pi+pi_st+st_da;
    mile2=ph_at+at_ne+ne_da;
    printf("\n");
    printf("1.\n");
    printf("Philadelphia -> Pittsburgh -> St.Louis -> Dallas ");
    printf("= %d Miles\n", mile1);
    printf("2.\n");
    printf("Philadelphia -> Atlanta -> New Orleans -> Dallas ");
    printf("= %d Miles\n", mile2);
    system("PAUSE");
    return 0;
}
