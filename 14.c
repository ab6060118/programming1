#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i,n[3];
    long int result=1;
    for (i = 0; i < 3; ++i) {
        printf("\n");
        printf("Input Data :<%d>\n", i+1);
        scanf("%d", &n[i]);
        if(n[i] == 0)
            i--;
    }
    printf("\n");
    printf("The Input Data : ");
    for (i = 0; i < 3; ++i) {
        printf("%d,", n[i]);
        result = result * n[i];
    }
    printf("\n");
    printf("The Result = %ld\n", result);
    system("PAUSE");
    return 0;
}
