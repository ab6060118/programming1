#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int id,month,year,year1,cyear,cmonth,date;
    char message[50];

    printf("Input Subscriber ID :\n");
    scanf("%d",&id);
    printf("Input Subscribe Month :\n");
    scanf("%d",&month);
    printf("Input Subscribe Year :\n");
    scanf("%d",&year);
    printf("Input how many Year You Subscribe :\n");
    scanf("%d",&year1);
    printf("Input Current Month :\n");
    scanf("%d",&cmonth);
    printf("Input Current Year :\n");
    scanf("%d",&cyear);
    printf("\n");
    date=(cyear-year)*12+(cmonth-month);
    if (year1*12-date>=0&&year1*12-date<2) {
        strcpy(message,"Continue For Magazine!");
    }
    else {
        if (year1*12-date<0) {
            strcpy(message,"Stop For Magazine!");
        }
    }
    printf("================================\n");
    printf("%6d  %s\n",id,message);
    printf("================================\n");
    return 0;
}
