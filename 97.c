#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(void)
{
    char moresCode[30][5] = {{".-"},
                             {"-..."},
                             {"-.-."},
                             {"-.."},
                             {"."},
                             {"..-."},
                             {"--"},
                             {"...."},
                             {".."},
                             {".---"},
                             {"-.-"},
                             {".-.."},
                             {"--"},
                             {"-."},
                             {"---"},
                             {".--."},
                             {"--.-"},
                             {".-."},
                             {"..."},
                             {"-"},
                             {"..-"},
                             {"...-"},
                             {".--"},
                             {"-..-"},
                             {"-.--"},
                             {"--.."}};
    char input[100],*tok;
    unsigned int i,len;
    printf("\n");
    printf("Please input string to decode into Morse code:\n");
    gets(input);
    for (i = 0; input[i]!='\0'; ++i) {
        input[i]=toupper(input[i]);
    }
    tok = strtok(input," ");
    while(tok != NULL) {
        printf("%s *** ", tok);
        len=strlen(tok);
        for (i = 0; i < len; ++i) {
            printf("%s ", moresCode[*tok-'A']);
            tok++;
        }
        printf("\n");
        tok = strtok(NULL," ");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
