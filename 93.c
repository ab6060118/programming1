#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[10];
    int score;
}ITEM;
void sort(ITEM [],int);
void modify(ITEM [],int,int);
char getGrade(int);
int main(void)
{
    FILE *in;
    int i=0,j,sum=0;
    ITEM students[100];

    in=fopen("93.txt","r");
    printf("\n");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        while(fscanf(in,"%s %d",students[i].name,&students[i].score)!=EOF) {
            sum+=students[i].score;
            i++;
        }
        sort(students,i);
        modify(students,sum/i,i);
        getGrade(sum/i);
        printf("***** Total %d students\n", i);
        printf("***** Average score : %d\n",sum/i);
        printf("***** Average grade : %c\n\n",getGrade(sum/i));
        printf("  NAME    SCORE  GRADE\n");
        printf("------------------------\n");
        for (j = 0; j < i; ++j) {
            printf("  %-8s%5d%5c\n", students[j].name,students[j].score,getGrade(students[j].score));
        }
    }
    printf("\n");
    printf("\n");
    system("PAUSE");
    return 0;
}

void sort(ITEM students[],int len)
{
    int i,j;
    ITEM temp;
    for (i = len-1; i > 0; i--)
        for (j = 0; j < i; ++j)
            if (students[j].name[0]>students[j+1].name[0]) {
                temp=students[j];
                students[j]=students[j+1];
                students[j+1]=temp;
            }
}

void modify(ITEM students[],int avg,int len) {
    int score=75-avg,i;
    for (i = 0; i < len; ++i)
        students[i].score+=score;
}

char getGrade(int score) {
    if(score>=90)
        return 'A';
    else if(score>=80)
        return 'B';
    else if(score>=70)
        return 'C';
    else if(score>=60)
        return 'D';
    else
        return 'E';
}
