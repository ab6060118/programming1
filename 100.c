#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <ctype.h>
typedef struct {
    char name[20],address[100],city[20],state[10],zipcode[10];
} Person;
void sort(Person [],int,char,char[]);
int getch();
void showMenu();
int main(void)
{
    FILE *in;
    in=fopen("100.txt","r");
    Person people[20];
    char choice=0,show[20];
    int i=0,j;
    if (!in) {
        printf("Can't find any information!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%s %s %s %s %s",people[i].name,people[i].address,people[i].city,people[i].state,people[i].zipcode)!=EOF) {
            i++;
        }
        showMenu();
        while(choice!='4') {
            choice=getch();
            if(choice < '4' && choice >= '1') {
                sort(people,i,choice,show);
                printf("\n");
                printf("             ***** Sort data by %s *****            \n", show);
                printf("  Name             Address          City  State  zipcode  \n");
                printf("----------------------------------------------------------\n");
                for (j = 0; j < i; ++j) {
                    printf("%6s%20s%14s%7s%9s\n",people[j].name,people[j].address,people[j].city,people[j].state,people[j].zipcode);
                }
                printf("\n");
                showMenu();
            }
        }
    }

    system("PAUSE");
    return 0;
}

void sort(Person people[],int len, char key, char show[])
{
    int i,j;
    Person temp;
    if (key=='1') {
        for (i = len-1; i > 0; i--) {
            for (j = 0; j < i; ++j)
                if (people[j].name[0]>people[j+1].name[0]) {
                    temp=people[j];
                    people[j]=people[j+1];
                    people[j+1]=temp;
                }
        }
        strcpy(show,"Name");
    }
    if (key=='2') {
        for (i = len-1; i > 0; i--) {
            for (j = 0; j < i; ++j)
                if (people[j].state[0]>people[j+1].state[0]) {
                    temp=people[j];
                    people[j]=people[j+1];
                    people[j+1]=temp;
                }
        }
        strcpy(show,"State");
    }
    if (key=='3') {
        for (i = len-1; i > 0; i--) {
            for (j = 0; j < i; ++j)
                if (people[j].zipcode[0]>people[j+1].zipcode[0]) {
                    temp=people[j];
                    people[j]=people[j+1];
                    people[j+1]=temp;
                }
        }
        strcpy(show,"ZipCode");
    }
}

int getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

void showMenu()
{
    int i=0;
    char menu[4][30]={{"1 - Name"},
                {"2 - State"},
                {"3 - ZipCode"},
                {"4 - Exit"}};
    printf("\n");
    printf("            **** Please choose a sort key\n");
    for (i = 0; i < 4; ++i) {
        puts(menu[i]);
    }
}
