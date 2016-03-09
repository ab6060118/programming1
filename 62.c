#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char name[10],level[10];
    int hours,numan=0;
    float hours_sum=0,avg;
    FILE *in;

    in=fopen("62.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        printf("    Name  Hours  Ability  \n");
        printf("--------------------------\n");
        while(fscanf(in,"%s %d",name,&hours)!=EOF) {
            if(hours>55)
                strcpy(level,"High");
            else if(hours<35)
                strcpy(level,"Low");
            else
                strcpy(level,"General");
            printf("%8s%7d%9s\n", name,hours,level);
            hours_sum=hours_sum+hours;
            numan++;
        }
        printf("--------------------------\n");
        avg=hours_sum/numan;
        if(avg>55)
            strcpy(level,"High");
        else if(avg<35)
            strcpy(level,"Low");
        else
            strcpy(level,"General");
        printf("The ability of this school is : %.2f (%s)\n", avg,level);
    }

    system("PAUSE");
    return 0;
}
