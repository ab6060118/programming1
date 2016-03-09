#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    char name[10],level;
    int age,code,total;

    in=fopen("66.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        printf("  Name    Position  Age group  Licence  Code number  \n");
        printf("---------------------------------------------------\n");
        while(fscanf(in,"%s %c %d %d",name,&level,&age,&code)!=EOF) {
            total=0;
            printf("%-6s", name);
            if(level=='A')
                printf("%12s", "Management");
            if(level=='B')
                printf("%12s", "Supervisor");
            if(level=='C')
                printf("%12s", "Clerical");
            if(age<25)
                printf("%10s", "< 25");
            if(age>24&&age<41)
                printf("%10s", "25 - 40");
            if(age>40&&age<66)
                printf("%10s", "41 - 65");
            if(age>65)
                printf("%10s", "> 65");
            if(code%2==0)
                printf("%9s", "EVEN");
            else
                printf("%9s", "ODD");
            while(code>0) {
                total=total+code%10;
                code=code/10;
            }
            printf("%13d\n", total);
        }
    }
    system("PAUSE");
    return 0;
}
