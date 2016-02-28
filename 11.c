#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    double beat1,beat2;
    beat1=78.*365.25*24*60*60;
    beat2=78.*365.25*24*60*75;
    printf("1. Total %11.2f Palp.if the Rate is 1 per second\n", beat1);
    printf("2. Total %11.2f Palp.if the Rate is 75 per minute\n", beat2);
    system("PAUSE");
    return 0;
}
