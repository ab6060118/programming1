#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    int i,j,num[11]={0};
    char string[300];
    printf("\n");
    printf("Please input a string :\n");
    fgets(string,sizeof(string),stdin);
    printf("\n");
    printf("There are %3ld characters in this paragraph\n", strlen(string));
    for (i = 0,j=0; string[i]!='\0'; ++i) {
        if(isalpha(string[i])&&string[i]!=' ')
            j++;
        else {
            num[j]++;
            j=0;
        }
    }
    for (i = 1; i < 11; ++i) {
        printf("There are %2d strings which length is %2d\n", num[i],i);
    }
    system("PAUSE");
    return 0;
}
