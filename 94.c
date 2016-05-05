#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[10],sex,hair[8],eye[8],religion[15];
    int height,weight;
} Person;
void sort(Person [],int);
int main(void)
{
    FILE *in;
    Person people[20];
    int i=0,j=0;
    in=fopen("94.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
    }
    else {
        printf("\n");
        printf("    Name  Height  Weight  Sex    Hair    Eye      Religion\n");
        printf("------------------------------------------------------------\n");
        while(fscanf(in,"%s %d %d %c %s %s %s",people[i].name,&people[i].height,&people[i].weight,&people[i].sex,people[i].hair,people[i].eye,people[i].religion)!=EOF) {
            i++;
        }
        sort(people,i);
        for (j = 0; j < i; ++j) {
            printf("%8s%8d%8d%5c%8s%7s%14s\n", people[j].name,people[j].height,people[j].weight,people[j].sex,people[j].hair,people[j].eye,people[j].religion);
        }
        printf("\n");
    }


    system("PAUSE");
    return 0;
}
void sort(Person people[],int len)
{
    int i,j;
    Person temp;
    for (i = len-1; i > 0; i--)
        for (j = 0; j < i; ++j)
            if (people[j].name[0]>people[j+1].name[0]) {
                temp=people[j];
                people[j]=people[j+1];
                people[j+1]=temp;
            }
}
