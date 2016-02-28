#include <stdio.h>

int main(void)
{
    float vi,vf,a,s,t;
    vi=10.;
    vf=2.5;
    t=1./60;
    a=(vf-vi)/t;
    s=vi*t+0.5*a*t*t;
    printf("a = %7.4f miles(sec*sec)\n", a);
    printf("a = %7.4f miles\n", s);
    system("PAUSE");
    return 0;
}
