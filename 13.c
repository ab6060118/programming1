#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char name1[20],name2[20],date[20];
    int dollar,cent;
    printf("Who Receive The Order :\n");
    scanf("%s", name1);
    printf("Who Pay The Order :\n");
    scanf("%s", name2);
    printf("When :\n");
    scanf("%s", date);
    printf("How much :(dollar cent)\n");
    scanf("%d %d", &dollar,&cent);
    printf("\n");
    printf("\t\tDate : %s\n", date);
    printf("Pay to the order of %s\t$%d.%d\n", name1,dollar,cent);
    printf("The amount of %d dollars and %d Cents\n", dollar,cent);
    printf("signed : %s\n", name2);
    system("PAUSE");
    return 0;
}
