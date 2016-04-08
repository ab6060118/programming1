#include <stdio.h>
#include <stdlib.h>
void printMatrix(float[][5]);
int main(void)
{
    FILE *in;
    float x[5][5],y[5][5],z[5][5];
    int i,j,k;
    in=fopen("86.txt","r");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        for (i = 0; i < 5; ++i)
            for (j = 0; j < 5; ++j)
                fscanf(in,"%f",&x[i][j]);

        for (i = 0; i < 5; ++i)
            for (j = 0; j < 5; ++j)
                fscanf(in,"%f",&y[i][j]);

        printf("%s\n", "--------------- Matrix X ---------------");
        printMatrix(x);
        printf("%s\n", "--------------- Matrix Y ---------------");
        printMatrix(y);
        printf("%s\n", "-------------- Matrix X+Y --------------");
        for (i = 0; i < 5; ++i)
            for (j = 0; j < 5; ++j)
                z[i][j]=x[i][j]+y[i][j];
        printMatrix(z);
        printf("%s\n", "-------------- Matrix X-Y --------------");
        for (i = 0; i < 5; ++i)
            for (j = 0; j < 5; ++j)
                z[i][j]=x[i][j]-y[i][j];
        printMatrix(z);
        printf("%s\n", "-------------- Matrix X*Y --------------");
        for (i = 0; i < 5; ++i)
            for (j = 0; j < 5; ++j){
                z[i][j]=0;
                for (k = 0; k < 5; ++k)
                    z[i][j]=z[i][j]+x[i][k]*y[k][j];
            }
        printMatrix(z);
    }
    system("PAUSE");
    return 0;
}

void printMatrix(float matrix[][5])
{
    int i,j;
    for (i = 0; i < 5; ++i) {
        for (j = 0; j < 5; ++j)
            printf("%7.2f",matrix[i][j]);
        printf("\n");
    }
}

