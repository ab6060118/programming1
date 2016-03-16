#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *in;
    char name[100][20],level[20];
    int i,counter;
    float score[100],avg=0;
    printf("\n");
    in=fopen("74.txt","r");
    if (!in) {
        printf("Can't find any information!!\n");
        return 1;
    }
    else {
        for(i=0;fscanf(in,"%s %f",name[i],&score[i])!=EOF;i++) {
            avg+=score[i];
        }
        avg=avg/i;
        printf("The average scort is %.2f\n", avg);
        printf("================================\n");
        printf("    Name  Score  Grade\n");
        printf("--------------------------------\n");
        for (counter = 0; counter < i; ++counter) {
            if (score[counter]<avg+10 && score[counter]>avg-10)
                strcpy(level,"Satisfactory");
            else if(score[counter]>avg+10)
                strcpy(level,"Outstanding");
            else
                strcpy(level,"Unsatisfactory");

            printf("%8s%7.0f  %-2s\n", name[counter],score[counter],level);
        }
    }
    system("PAUSE");
    return 0;
}
