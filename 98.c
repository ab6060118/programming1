#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <termios.h>
#include <ctype.h>
int getche();
void showMenu();
void inputSourceString(char []);
void printSoruceString(char []);
void deleteSubString(char []);
void insertSubString(char []);
void subStringLocation(char []);
void replaceSubString(char []);
int checkSourceString(char []);
int findPosition(char *,char *);
char* strrev(char *);
int main(void)
{
    char choiece='S',sourceString[100]={};
    showMenu();
    printf("\n");
    while(choiece!='Q') {
        printf("**** Your choice (S:Show function) ===> ");
        choiece=getche();
        printf("\n");
        switch (choiece) {
            case 'D':
                deleteSubString(sourceString);
                break;
            case 'E':
                inputSourceString(sourceString);
                break;
            case 'I':
                insertSubString(sourceString);
                break;
            case 'L':
                subStringLocation(sourceString);
                break;
            case 'P':
                printSoruceString(sourceString);
                break;
            case 'R':
                replaceSubString(sourceString);
                break;
            case 'S':
                showMenu();
                break;
            case 'Q':
                break;
            default:
                printf("Unknow input!! Please input again!!\n");
                break;
        }
        printf("\n");
    }
    system("PAUSE");
    return 0;
}

int getche(void) {
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

void showMenu()
{
    int i;
    char menu[9][30]={{"**** Edit function ****"},
        {"D - Delete a sub-string"},
        {"E - Input a string"},
        {"I - Insert a sub-string"},
        {"L - Locate a sub-string"},
        {"P - Print source string"},
        {"R - Replace a sub-string"},
        {"S - Show function"},
        {"Q - Quit"}};
    printf("\n");
    for (i = 0; i < 9; ++i)
        puts(menu[i]);
}

void inputSourceString(char sourceString[])
{
    printf("***** Please intpu source string :\n");
    fgets(sourceString,100,stdin);
    sourceString[strlen(sourceString)-1]='\0';
}

void printSoruceString(char sourceString[])
{
    if(!checkSourceString(sourceString))
        return;
    printf("Source string is : ");
    puts(sourceString);
}

void deleteSubString(char sourceString[])
{
    char subString[100];
    int position;
    if(!checkSourceString(sourceString))
        return;
    printf("Delete what string ? ");
    fgets(subString,100,stdin);
    subString[strlen(subString)-1]='\0';
    position=findPosition(sourceString,subString);
    if(position==-1) {
        printf("The %s is not found in the source string.\n",subString);
        return;
    }
    memmove(&sourceString[position],&sourceString[position]+strlen(subString),1+strlen(&sourceString[position]+strlen(subString)));
    printf("**** New source : %s\n", sourceString);
}

int checkSourceString(char sourceString[])
{
    if(strlen(sourceString)==0) {
        printf("Please input source string first!");
        return 0;
    }
    return 1;
}

void insertSubString(char sourceString[])
{
    char subString[100];
    int position;
    if(!checkSourceString(sourceString))
        return;
    printf("Insert what string ? ");
    fgets(subString,100,stdin);
    subString[strlen(subString)-1]='\0';
    strrev(subString);
    printf("At what position ? ");
    scanf("%d", &position);
    strrev(sourceString+position-1);
    strcat(sourceString,subString);
    strrev(sourceString+position-1);
    printf("**** New source : %s\n", sourceString);
}

void subStringLocation(char sourceString[])
{
    char subString[100];
    int position;
    if(!checkSourceString(sourceString))
        return;
    printf("Locate what string ? ");
    fgets(subString,100,stdin);
    subString[strlen(subString)-1]='\0';
    position=findPosition(sourceString,subString);
    if (position==-1) {
        printf("Can't found '%s'.",subString);
        return;
    }
    printf("The '%s' is in the %d of source string.\n", subString,position+1);
}

void replaceSubString(char sourceString[])
{
    char oldString[100],newString[100];
    int position;
    if(!checkSourceString(sourceString))
        return;
    printf("Replace old string ? ");
    fgets(oldString,100,stdin);
    oldString[strlen(oldString)-1]='\0';
    position=findPosition(sourceString,oldString);
    if(position==-1) {
        printf("The %s is not found in the source string.\n",oldString);
        return;
    }
    printf("With new string ? ");
    fgets(newString,100,stdin);
    newString[strlen(newString)-1]='\0';
    strncpy(sourceString+position,newString,strlen(newString));
    printf("**** New source : %s\n", sourceString);
}

int findPosition(char *sourceString,char *subString)
{
    char *temp;
    temp=strstr(sourceString,subString);
    if(temp==NULL){
        return -1;
    }
    return temp-sourceString;
}

char *strrev(char *str)
{
    char *p1, *p2;

    if (! str || ! *str)
        return str;
    for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
    {
        *p1 ^= *p2;
        *p2 ^= *p1;
        *p1 ^= *p2;
    }
    return str;
}
