#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char st;
    float number;
    printf("Please Input One Of The Charater <S/T> :\n");
    scanf("%c", &st);
    printf("Please Input The Number\n");
    scanf("%f", &number);
    if (st=='S') {
        printf("Send money! I need $%f\n", number);
    }
    else {
        if (st=='T') {
            printf("The temperature last night was %f degrees\n", number);
        }
        else {
            printf("Please Input The Correct Key !!!\n");
        }
    }
    system("PAUSE");
    return 0;
}
