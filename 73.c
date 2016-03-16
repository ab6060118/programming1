#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
bool checkInput(char []);
void numberFormatter(char [],int);
int main(void)
{
    char a[20],b[20],c[20];
    int carry=0,i;
    memset(c,'0',20);
    c[11]='\0';
    printf("\n");

    printf("Input number1 (less than 10 digit) : \n");
    fgets(a,sizeof(a),stdin);
    if (!checkInput(a)) {
        printf("Please input less than 10 digit.\n");
        return 1;
    }
    numberFormatter(a,10);

    printf("Input number2 (less than 10 digit) : \n");
    fgets(b,sizeof(b),stdin);
    if (!checkInput(b)) {
        printf("Please input less than 10 digit.\n");
        return 1;
    }
    numberFormatter(b,10);

    for (i = 10; i >= 0; i--) {
        if (i==0) {
            c[0]=carry+'0';
        }
        else
            c[i]=(a[i-1]+b[i-1]-'0'-'0'+carry)%10+'0';
        if ((a[i-1]+b[i-1]-'0'-'0'+carry)>9)
            carry=1;
        else
            carry=0;
    }
    printf("X   = %11s\n", a);
    printf("Y   = %11s\n", b);
    printf("X+Y = %11s\n", c);

    system("PAUSE");
    return 0;
}

bool checkInput(char input[])
{
    return strlen(input)<12?true:false;
}

void numberFormatter(char input[], int size) {
    int i,len;
    char temp[20],*chtPtr;
    strcpy(temp,input);
    len=strlen(input)-1;
    chtPtr=input;
    for (i = 0; i < size-len; ++i)
        *chtPtr++='0';
    for (i = 0; i < len; ++i)
        *chtPtr++=temp[i];
    *chtPtr='\0';
}
