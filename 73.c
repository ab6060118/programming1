#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool checkInput(char []);
int main(void)
{
    char a[100],b[100],c[100];
    int number,lenx,leny,tmep,tempx,tempy,carry=0,i,j;
    printf("\n");

    printf("Input number1 (less than 10 digit) : \n");
    fgets(a,sizeof(a),stdin);
    if (!checkInput(a)) {
        printf("Please input less than 10 digit.\n");
        return 1;
    }

    printf("Input number2 (less than 10 digit) : \n");
    fgets(b,sizeof(b),stdin);
    if (!checkInput(b)) {
        printf("Please input less than 10 digit.\n");
        return 1;
    }
    puts(a);

    printf("\n");
    system("PAUSE");
    return 0;
}

bool checkInput(char input[])
{
    return strlen(input)<12?true:false;
}
