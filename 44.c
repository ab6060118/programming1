#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i,data[3];
    char result[3][5];
    printf("Input 3 data : \n");
    for (i = 0; i < 3; ++i) {
        scanf("%d", &data[i]);
        data[i]/9?strcpy(result[i],"Yes"):strcpy(result[i],"No");
    }
    printf("--------------------------\n");
    printf("    Number  9's Multiply  \n");
    printf("--------------------------\n");
    for (i = 0; i < 3; ++i) {
        printf("%10d%14s\n", data[i],result[i]);
    }
    printf("--------------------------\n");
    system("PAUSE");
    return 0;
}
