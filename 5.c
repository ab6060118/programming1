#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float pound, kg, g;
    printf("Input Data (Pound) :\n");
    scanf("%f", &pound);
    kg=pound*0.453592;
    g=pound*453.592;
    printf("%f pound = %10.6f kg\n", pound, kg);
    printf("%f pound = %10.6f g\n", pound, g);

    system("PAUSE");
    return 0;
}
