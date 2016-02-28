#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int roomNumber[3],size[3],enroll[3],filled[3],i;
    printf("Input data <room_number room_size enroll>\n");
    for (i = 0; i < 3; ++i) {
        filled[i]=0;
        scanf("%d %d %d", &roomNumber[i],&size[i],&enroll[i]);
        if (size[i]-enroll[i] == 0) {
            filled[i]=1;
        }
    }
    printf("\n");
    printf("  Room    Maximun    Number    Reamaining    \n");
    printf(" Number    size     enrolled      seat      Filled?  \n");
    printf("-----------------------------------------------------\n");
    for (i = 0; i < 3; ++i) {
        printf("%6d%8d%11d%12d", roomNumber[i],size[i],enroll[i],size[i]-enroll[i]);
        if (filled[i]) {
            printf("%11s\n", "Yes");
        }
        else {
            printf("%11s\n", "No");
        }
    }
    printf("-----------------------------------------------------\n");

    system("PAUSE");
    return 0;
}
