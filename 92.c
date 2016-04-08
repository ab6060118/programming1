#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    char first[4][10],sec[20],third[3][15];
    in=fopen("92.txt","r");
    printf("\n");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        fscanf(in,"%s %s %s %s",first[0],first[1],first[2],first[3]);
        fscanf(in,"%s",sec);
        fscanf(in,"%s %s %s",third[0],third[1],third[2]);

        printf("%s %s %s %s\n",first[0],first[1],first[2],first[3]);
        printf("%s\n",sec);
        printf("%s %s %s\n",third[0],third[1],third[2]);
        printf("\n");
        printf("a) %-11s: %s\n", "Porfession",first[0]);
        printf("b) %-11s: %s\n", "First name",first[1]);
        printf("c) %-11s: %s\n", "State",third[1]);
        printf("d) %-11s: %s\n", "Zip code",third[2]);
    }
    printf("\n");
    printf("\n");
    system("PAUSE");
    return 0;
}
