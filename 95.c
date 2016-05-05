
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char name[10],sex[10],so[20];
    float rate,tax;
    int dep;
} Person;
int main(void)
{
    FILE *in;
    Person people[20];
    int i=0,j=0,dep,test;
    char name[10],sex[10],so[20];
    float rate,tax;
    in=fopen("95.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
    }
    else {
        printf("Name: ");
        scanf("%s", name);
        printf("Sex: ");
        scanf("%s",sex);
        printf("Social security NO.: ");
        scanf("%s",so);
        printf("NO. Of dependents: ");
        scanf("%d",&dep);
        printf("Hourly salary less than: ");
        scanf("%f",&rate);
        printf("Taxable salary more than: ");
        scanf("%f",&tax);
        printf("\n");
        printf("    Name    Sex      SOCSECNUM  NUMDEPEND  Rate    Tax\n");
        printf("--------------------------------------------------------\n");
        while(fscanf(in,"%s %s %s %d %f %f",people[i].name,people[i].sex,people[i].so,&people[i].dep,&people[i].rate,&people[i].tax)!=EOF) {
            i++;
        }
        for (j = 0; j < i; ++j) {
            if(name[0]!='*'&&strcmp(name,people[j].name)!=0)
                continue;
            if(sex[0]!='*'&&strcmp(sex,people[j].sex)!=0)
                continue;
            if(so[0]!='*'&&strcmp(so,people[j].so)!=0)
                continue;
            if(dep!=-1&&dep!=people[j].dep)
                continue;
            if(rate!=-1&&rate<people[j].rate)
                continue;
            if(tax!=-1&&tax>people[j].tax)
                continue;
            printf("%8s%8s%14s%7d%10.2f%7.2f\n",people[j].name,people[j].sex,people[j].so,people[j].dep,people[j].rate,people[j].tax);
        }
    }
    printf("\n");
    system("PAUSE");
}
