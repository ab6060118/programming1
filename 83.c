#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
int getche();
void findSam(char,char[],char[]);
static int count=0;
int main(void)
{
    char puzzle[]="SOLUTION\0",ans[]="********\0",find;
    int times=10,puzzleLen;
    printf("\n");
    printf("To guess the string\n");
    puts(ans);
    printf("\n");
    puzzleLen=strlen(puzzle);
    while(times>0) {
        printf("You have %2d times left\n", times);
        find=getche();
        find=toupper(find);
        findSam(find,puzzle,ans);
        printf("\n");
        puts(ans);
        times--;
        if (count==puzzleLen) {
            printf("Conratulation!\n");
            printf("Yout beat it!\n");
            break;
        }
        if (times==0) {
            printf("I win! Try hard next time!\n");
            printf("Bye!\n");
        }
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

void findSam(char find,char puzzle[],char ans[]) {
    int i;
    for (i = 0; puzzle[i]!='\0'; ++i) {
        if (puzzle[i]==find) {
            if (ans[i]!='*') {
                break;
            }
            else {
                ans[i]=find;
                count++;
            }
        }
    }
}
