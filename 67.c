#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    char text[100],shift[3];
    unsigned int i;
    printf("Please input a shift letter (in upper case) : \n");
    fgets(shift,sizeof(shift),stdin);
    printf("Please input a string (in upper case) : \n");
    fgets(text, sizeof(text), stdin);
    printf("The new string is : \n");
    for (i = 0; text[i]!='\0'; ++i) {
        if(text[i]>'Z'||text[i]<'A')
            continue;
        else
            text[i]=(text[i]+shift[0])%26+'A';
    }
    puts(text);
    system("PAUSE");
    return 0;
}
