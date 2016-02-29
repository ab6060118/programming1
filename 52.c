#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int first=1,second=1,number,i;
    printf("----------------------- Thie FIVONACCI SSERIES -----------------------\n");
    printf("The First 15's Terms Are : %d,%d,", first,second);
    for (i = 0; i < 13; ++i) {
        number=first+second;
        first=second;
        second=number;
        printf("%d,",number);
    }
    system("PAUSE");
    return 0;
}
