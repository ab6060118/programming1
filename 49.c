#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void pri(int,int,int[]);
void sq(int,int,float[]);
int main(void)
{
    int i,data[6],m7[6],m11[6],m13[6],odd[6],prime[6];
    float squar[6];
    printf("Input 6 Integer :\n");
    for (i = 0; i < 6; ++i) {
        scanf("%d", &data[i]);
        m7[i]=data[i]%7?0:1;
        m11[i]=data[i]%11?0:1;
        m13[i]=data[i]%13?0:1;
        odd[i]=data[i]%2?1:0;
        sq(data[i],i,squar);
        pri(data[i],i,prime);
    }
    printf("\n");
    printf("-------------------------------------------------\n");
    printf("  Number   Mutiply  Odd/Even  Squar_Root  Prime  \n");
    printf("-------------------------------------------------\n");
    for (i = 0; i < 6; ++i) {
        printf("%8d  ", data[i]);

        if (m7[i]) 
            printf("7,");
        else
            printf("  ");
        if (m11[i])
            printf("11,");
        else
            printf("   ");
        if (m13[i])
            printf("13,");
        else
            printf("   ");

        if (odd[i]) {
            printf("%10s","Odd");
        }
        else {
            printf("%10s","Even");
        }

        printf("%12.4f", squar[i]);

        if (prime[i]) {
            printf("%7s\n","Yes!");
        }
        else {
            printf("%7s\n","No!");
        }
    }
    printf("-------------------------------------------------\n");
    system("PAUSE");
    return 0;
}

void pri(int data,int i,int prime[]) {
    int no=2,remainder=2;
    while(no<data) {
        remainder=data%no++;
        if (remainder==0) {
            prime[i] = 0;
            break;
        }
    }
    if (remainder!=0) {
        prime[i]=1;
    }
};

void sq(int data,int i,float squar[]) {
    float temp=1,lg=0.1,ng=0;
    while(fabs(temp)>0.000001) {
        ng=0.5*(lg+data/lg);
        temp=ng-lg;
        lg=ng;
    }
    squar[i]=ng;
};
