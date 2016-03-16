#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *in;
    int number,correct,i;
    char grade,response[15],answer[]={'T','F','F','F','T','F','T','F','T','T','\0'};
    printf("\n");
    in=fopen("77.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        printf("The correct answer : %s\n", answer);
        printf("Reg-no.      answer  correct-no.  grade\n");
        printf("-----------------------------------------\n");
        while(fscanf(in,"%d %s",&number,response)!=EOF) {
            correct=0;
            for (i = 0; i < 10; ++i) {
                if (response[i]==answer[i])
                    correct++;
            }
            if(correct==10||correct==9)
                grade='A';
            else if(correct==8||correct==7)
                grade='C';
            else
                grade='F';
            printf("%8d%12s%12d%7c\n", number,response,correct,grade);
        }
    }
    system("PAUSE");
    return 0;
}
