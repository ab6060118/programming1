#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int data[4],i,no,remainder;
    char result[4][20];

    printf("Input 4 data :\n");
    for (i = 0; i < 4; ++i) {
        no=2;
        remainder=2;
        scanf("%d",&data[i]);
        while(no<data[i]) {
            remainder=data[i]%no;
            if (remainder==0) {
                strcpy(result[i],"No");
                break;
            }
            no++;
        }
        if (remainder!=0) {
            strcpy(result[i],"Yes");
        }
    }
    printf("------------------\n");
    printf("  Number  Answer  \n");
    printf("------------------\n");
    for (i = 0; i < 4; ++i) {
        printf("%8d%8s\n", data[i],result[i]);
    }
    printf("------------------\n");
    system("PAUSE");
    return 0;
}
