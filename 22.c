#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char string[3][30];
    int longNum=1, shortNum=30, len[3], longIndex, shortIndex, i;
    printf("Please input the first string :\n");
    scanf("%s", string[0]);
    len[0]=strlen(string[0]);

    printf("Please input the second string :\n");
    scanf("%s", string[1]);
    len[1]=strlen(string[1]);

    printf("Please input the third string :\n");
    scanf("%s", string[2]);
    len[2]=strlen(string[2]);

    for (i = 0; i < 3; ++i) {
        if(len[i] > longNum) {
            longIndex=i;
            longNum=len[i];
        }

        if(len[i] < shortNum) {
            shortIndex=i;
            shortNum=len[i];
        }
    }

    printf("The lognest string is %9s\n", string[longIndex]);
    printf("The shortest string is %8s\n", string[shortIndex]);

    system("PAUSE");
    return 0;
}
