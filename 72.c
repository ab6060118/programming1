#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,number,a=0,b=0,c=0,d=0,e=0,f=0;
    printf("\n");
    printf("Please input 12 number : \n");
    for (i = 0; i < 12; ++i) {
        scanf("%d",&number);
        if (number>=500)
            f++;
        else if(number>=400)
            e++;
        else if(number>=300)
            d++;
        else if(number>=200)
            c++;
        else if(number>=100)
            b++;
        else
            a++;
    }
    printf("\n");
    printf("%9s%9s%9s%9s%9s%9s\n","0-99","100-199","200-299","300-399","400-499","500-");
    printf("--------------------------------------------------------\n");
    printf("%9d%9d%9d%9d%9d%9d\n", a,b,c,d,e,f);
    printf("--------------------------------------------------------\n");
    printf("\n");
    system("PAUSE");
    return 0;
}
