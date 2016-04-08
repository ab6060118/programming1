#include <stdio.h>
#include <stdlib.h>
void printCards(int[][2]);
int main(void)
{
    FILE *in;
    int cards[5][2],odd=0,input,suit,flush=0,num[14]={0},i,four=0,three=0,two=0,straight=0;
    in=fopen("85.txt","r");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%d",&input)!=EOF) {
            if (odd==0)
                flush=input;

            if (odd%2==0) {
                suit=input;
                if(flush!=input)
                    flush=0;
            }
            else {
                cards[odd/2][0]=suit;
                cards[odd/2][1]=input;
                num[input]++;
            }
            odd++;
        }
        printCards(cards);
    }
    for (i = 0; i < 14; ++i) {
        if(num[i]==4)
            four++;
        if(num[i]==3)
            three++;
        if(num[i]==2)
            two++;
        if(num[i])
            straight++;
        if(num[i]==0&&straight!=5)
            straight=0;
    }
    printf("\n");
    if(straight)
        printf("straight ");
    if(flush)
        printf("flush");
    if(four)
        printf("four-of-a-kind");
    else if(three&&two==1)
        printf("full house");
    else if(three)
        printf("three-of-a-kind");
    else if(two==2)
        printf("tow pairs");
    else if(two==1)
        printf("one pairs");

    system("PAUSE");
    return 0;
}

void printCards(int cards[][2]) {
    int i=0;
    for (i = 0; i < 5; ++i) {
        switch (cards[i][0]) {
            case 1:
                printf("%-9s","Spade");
                break;
            case 2:
                printf("%-9s","Heart");
                break;
            case 3:
                printf("%-9s","Diamond");
                break;
            case 4:
                printf("%-9s","Club");
                break;
        }
        switch (cards[i][1]) {
            case 1:
                printf("Ace");
                break;
            case 2:
                printf("Two");
                break;
            case 3:
                printf("Three");
                break;
            case 4:
                printf("Four");
                break;
            case 5:
                printf("Five");
                break;
            case 6:
                printf("Six");
                break;
            case 7:
                printf("Seven");
                break;
            case 8:
                printf("Eight");
                break;
            case 9:
                printf("Nine");
                break;
            case 10:
                printf("Ten");
                break;
            case 11:
                printf("Jack");
                break;
            case 12:
                printf("Queen");
                break;
            case 13:
                printf("King");
                break;
        }
        printf("\n");
    }
}
