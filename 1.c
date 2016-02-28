#include <stdio.h>
#include <stdlib.h>

int main() {
    float m, cm, inch;
    printf("Input Data (inches) : \n");
    scanf("%f", &inch);
    cm=inch*2.54;
    m=inch*0.0254;
    printf("%f Inches = %8.4f cm\n", inch, cm);
    printf("%f Inches = %8.4f m\n", inch, m);

    system("PAUSE");
    return 0;
}
