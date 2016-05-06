#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    typedef struct {
        char name[10];
    }Name;
    FILE *in;
    Name names[20], temp;
    int i=0,j,max;
    in=fopen("99.txt","r");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        printf("\n");
        while(fgets(names[i].name,10,in)!=NULL){
            names[i].name[strlen(names[i].name)-1]='\0';
            printf("%6s", names[i].name);
            i++;
        }
        for (j = 0; j < i; ++j) {
            for (max=j+1; max < i; max++) {
                if(names[j].name[0]>names[max].name[0]){
                    temp=names[j];
                    names[j]=names[max];
                    names[max]=temp;
                }
            }
        }
        j=0;
        printf("\n");
        while(j<i) {
            printf("%6s",names[j++].name);
        }
        printf("\n");
    }
    printf("\n");
    system("PAUSE");
    return 0;
}
