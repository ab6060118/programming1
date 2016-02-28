#include <stdio.h>
#include <stdlib.h>

int main() {
    float tf, yard, inch;
    printf("Input Data (taiwan_feet) : \n");
    scanf("%f", &tf);
    inch=tf*0.9942;
    yard=tf*0.3314;
    printf("%f Inches = %8.4f Inches\n", tf, inch);
    printf("%f Inches = %8.4f Yards\n", tf, yard);

    system("PAUSE");

    return 0;
}
