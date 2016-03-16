#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    FILE *in;
    float x,y;
    char result[3];
    int xx,yy,i;
    printf("\n");
    in=fopen("75.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        printf("  i    x[i]    y[i]    z[i]  \n");
        printf("-----------------------------\n");
        for(i=1,xx=0,yy=0;fscanf(in,"%f %f",&x,&y)!=EOF;i++) {
            if (x>y) {
                xx++;
                strcpy(result,"+1");
            }
            else if(x<y) {
                yy++;
                strcpy(result,"-1");
            }
            else
                strcpy(result,"0");
            printf("%3d%8.2f%8.2f%8s\n",i,x,y,result);
        }
        printf("-----------------------------\n");
        printf("There are %3d sets which X > Y.\n", xx);
        printf("There are %3d sets which X < Y.\n", yy);
    }
    system("PAUSE");
    return 0;
}
