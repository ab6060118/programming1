#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include <termios.h>
int getche();
int main(void)
{
    char puzzle[]="SOLUTION\0",ans[]="********\0",a;
    int times=10;
    printf("\n");
    printf("Toguess the string\n");
    puts(ans);
    printf("\n");
    while(times>0) {
        printf("You have %2d times left\n", times);
        a=getche();
        a=toupper(a);
        times--;
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
