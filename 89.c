#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    in=fopen("89.txt","r");
    char ans[15]={"ABADEAECAB\0"},input[15];
    int option[5]={0},i;
    printf("\n");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        for (i = 0; i < 10; ++i) {
            printf(" (%d)", i+1);
        }
        printf("\n");
        for (i = 0; i < 10; ++i) {
            printf("  %c ", ans[i]);
        }
        printf("\n");
        printf("=========================================\n");
        while(fscanf(in,"%s",input)!=EOF) {
            for (i = 0; i < 10; ++i) {
                printf("  %c ", input[i]);
                if (ans[i]==input[i])
                    option[ans[i]-'A']++;
            }
            printf("\n");
        }
        printf("=========================================\n");
        printf("\n");
        for (i = 0; i < 5; ++i) {
            printf("There are %2d correct in %c\n", option[i],'A'+i);
        }
    }
    system("PAUSE");
    return 0;
}
