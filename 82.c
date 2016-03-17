#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char string[500];
    int i,j,k,now,len_4;
    printf("\n");
    printf("Please input a string :\n");
    fgets(string,sizeof(string),stdin);
    printf("\n");
    for (i = 0,len_4=0; string[i]!='\0'; ++i) {
        if(isalpha(string[i])&&string[i]!=' ')
            j++;
        else {
            if(j==4)
                len_4++;
            j=0;
        }
    }
    printf("There are %2ld characters in this paragraph\n", strlen(string)-1);
    printf("There are %2d strings which lengh is 4\n", len_4);
    printf("\n");
    for (i = 0,now=0; string[i]!='\0'; ++i) {
        if(isalpha(string[i])&&string[i]!=' ')
            j++;
        else {
            if(j==4){
                for (k = now; k<now+j; k++)
                    putchar('*');
            }
            else {
                for (k = now; k<now+j; k++)
                    putchar(string[k]);
            }
            putchar(' ');
            now=now+j+1;
            j=0;
        }
    }
    system("PAUSE");
    return 0;
}
