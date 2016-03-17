#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char input[1000];
    int i;
    printf("Please input a string with blanks :\n");
    fgets(input,sizeof(input),stdin);
    printf("\nOutput string after deleting blanks :\n");
    for (i = 0; input[i]!='\0'; ++i) {
        if(input[i]!=' ')
            putchar(input[i]);
    }
    system("PAUSE");
    return 0;
}
