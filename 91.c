#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char a[100],b[100],*ptr;
    //printf("%s\n", );
    printf("Plaese input string A : \n");
    gets(a);
    printf("Plaese input string B : \n");
    gets(b);
    ptr = strstr(a,b);
    if (ptr) {
        printf("B string is located in %ldth A string.\n",ptr-a);
    }
    else {
        printf("B string is not substring of A string.\n");
    }
    system("PAUSE");
    return 0;
}
