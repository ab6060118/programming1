#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
int getch();
void printString(char[],char[][15]);
int main(void)
{
    char subject[8][15]={"John","Bread","You","His father","Mary's dog","Your hair","Catarina","Trees"},
         verb[8][15]={"likes","loves","drinks","eats","jump","run","drive","swim"},
         adverb[8][15]={"crazy","slowly","fast","early","high","long","delicious","beautiful"};
    int ch,len=0;

    printString("SUBJECT",subject);
    printString("VERB",verb);
    printString("ADVERB",adverb);

    do {
        printf("\n\nInput 4 number to make a sentence\n");
        printf("Every number range from 1 to 8\n");
        while(len<4) {
            ch=getch();
            if(ch<'9'&&ch>'0') {
                ch=ch-'0'-1;
                if (len==0||len==3)
                    printf("%s ", subject[ch]);
                if (len==1)
                    printf("%s ", verb[ch]);
                if (len==2)
                    printf("%s ", adverb[ch]);
                len++;
            }
        }
        printf("\n--- Press any key to restart. ---\n");
        printf("--- Or press <ESC> to stop. ---\n");
        ch=getch();
        len=0;
    }while(ch!=27);
    system("PAUSE");
    return 0;
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

void printString(char name[],char value[][15])
{
    int i;
    printf("\n%-8s=",name);
    for (i = 0; i < 8; ++i) {
        printf("""%s"",", value[i]);
    }
    
}
