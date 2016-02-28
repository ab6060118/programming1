#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char fname[7],mname[7],lname[6];
    printf("Input First Name :\n");
    scanf("%s", fname);
    printf("Input Middle Name :\n");
    scanf("%s", mname);
    printf("Input Last Name :\n");
    scanf("%s", lname);
    printf("His Name Is %6s %c %c\n", lname, fname[0],mname[0]);
    system("PAUSE");
    return 0;
}
