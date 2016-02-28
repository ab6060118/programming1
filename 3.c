#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float c,fa;
    printf("Input Data (Fahreheit) :\n");
    scanf("%f", &fa);
    c=5./9.*(fa-32.);
    printf("%f Fahrenheit = %f Celsius \n", fa,c);

    system("PAUSE");

    return 0;
}
