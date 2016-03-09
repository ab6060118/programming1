#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *in;
    char name[10];
    float value,total;

    in=fopen("63.txt","r");
    if (!in) {
        printf("Can't find any information!!\n");
        return 1;
    }
    else {
        printf("  Name    Total  \n");
        printf("-----------------\n");
        while(fscanf(in,"%s",name)!=EOF) {
            if (!strcmp(name,"Z")) {
                printf("%11.2f",total);
                if (total<0) {
                    printf("   *(Note: minus total)");
                }
                printf("\n");
                continue;
            }
            while(fscanf(in,"%f", &value)) {
                if (strlen(name)>1) {
                    total=value;
                    printf("%6s",name);
                } 
                if (!strcmp(name,"W"))
                    total=total-value;
                if (!strcmp(name,"D"))
                    total=total+value;
            }
        }
        printf("-----------------\n");
    }

    system("PAUSE");
    return 0;
}
