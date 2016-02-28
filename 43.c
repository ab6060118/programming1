#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int n;
    printf("Input a Integer : ");
    scanf("%d",&n);
    while(n!=0) {
        printf("%d\n", n%10);
        n=n/10;
    }
    system("PAUSE");
    return 0;
}
