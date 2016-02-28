#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int first=0,last=0,n,i;
    printf("Please input 10 number :\n");
    for (i = 0; i < 10; ++i) {
        scanf("%d", &n);
        if (n==12) {
            if (first==0) {
                first=i+1;
            }
            last=i+1;
        }
    }
    printf("The First 12 Index Is %d\n", first);
    printf("The Last 12 Index Is %d\n", last);
    system("PAUSE");
    return 0;
}
