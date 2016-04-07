#include <stdio.h>
#include <stdlib.h>
void printCards(int[][2]);
int main(void)
{
    FILE *in;
    int cards[5][2],odd=0,input,suit;
    in=fopen("85.txt","r");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%d",&input)!=EOF) {
            if (odd%2==0) {
                suit=input;
            }
            else {
                cards[odd/2][0]=suit;
                cards[odd/2][1]=input;
            }
            odd++;
        }
        printCards(cards);
    }
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
