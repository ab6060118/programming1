#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int grade[10],i,good=0,pass=0,fail=0;
    char level[10];
    printf("Please input 10 grade :\n");
    for (i = 0; i < 10; ++i) {
        scanf("%d", &grade[i]);
    }
    printf("\n");
    printf("    *** Grade ***    \n");
    printf("---------------------\n");
    for (i = 0; i < 10; ++i) {
        if (grade[i]>=90) {
            strcpy(level,"Good");
            good++;
        }
        else if(grade[i]>=60){
            strcpy(level,"Pass");
            pass++;
        }
        else {
            strcpy(level,"Fail");
            fail++;
        }
        printf("%7d%8s\n", grade[i],level);
    }
    printf("---------------------\n");
    printf("The Student Of Grade 'Good' ---> %d\n", good);
    printf("The Student Of Grade 'Pass' ---> %d\n", pass);
    printf("The Student Of Grade 'Fail' ---> %d\n", fail);
    system("PAUSE");
    return 0;
}
