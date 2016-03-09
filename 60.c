#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
void romtoar(char []);
void copystrn(char [],char [],int,int);

static char table[4][9][5]={{"I","II","III","IV","V","VI","VII","VIII","IX"},
                            {"X","XX","XXX","XL","L","LX","LXX","LXXX","XC"},
                            {"C","CC","CCC","CD","D","DC","DCC","DCCC","CM"},
                            {"M","MM","MMM"}};

int main(void)
{
    FILE *in;
    unsigned long int i;
    char roman[10];

    in=fopen("60.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%s",roman)!=EOF) {
            for (i = 0; i < strlen(roman); ++i) {
                roman[i]=toupper(roman[i]);
            }
            romtoar(roman);
        }
    }
    fclose(in);
    system("PAUSE");
    return 0;
}

void romtoar(char roman[])
{
    int power,times,p1,p2,loop1,loop2,len,answer,front;
    char temp[5];
    p1=1;
    len=strlen(roman)+1;
    front=4;
    answer=0;
    while(p1<len) {
        p2=4;
        times=0;
        if ((p2+p1)>=len) {
            p2=len-p1;
        }
        while((times==0)&&(p2>0)) {
            copystrn(temp,roman,p1,p2);
            for (loop1 = 0; loop1 < 4; ++loop1) {
                for (loop2 = 0; loop2 < 10; ++loop2) {
                    if (!strcmp(temp,table[loop1][loop2-1])) {
                        power=loop1;
                        times=loop2;
                    }
                }
            }
        }
        p1+=p2+1;
        if ((times==0)||(front<=power)) {
            printf("Illegal input!\n");
            return;
        }
        loop2=pow(10,1*power)*times;
        front=power;
        answer+=loop2;
    }
    printf("The roman number is : %s\n", roman);
    printf("In decimal equal to : %d\n", answer);
}

void copystrn(char temp[],char roman[],int p1,int p2)
{
    int i,j;
    for (i=0,j=p1-1; i<p2; ++i,j++) {
        temp[i]=roman[j];
    }
    temp[i]='\0';
}
