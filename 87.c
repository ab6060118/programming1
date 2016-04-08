#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *in;
    in=fopen("87.txt","r");
    float total[5]={0},sum=0,tmp,tmp1,tmp2,tmp3,rate[4];
    char name[4][20]={"Dickson\0","Wilson\0","Thomas\0","Heigen\0"};
    int i=1,first=0,sec=0,newM=0;
    printf("\n");
    if (!in) {
        printf("Can't find anu information!!\n");
        return 1;
    }
    else {
        printf(" District |   Dickson   Wilson   Thomas   Heigen\n");
        printf("===================================================\n");
        while(fscanf(in,"%f %f %f %f",&tmp,&tmp1,&tmp2,&tmp3)!=EOF) {
            total[0]+=tmp;
            total[1]+=tmp1;
            total[2]+=tmp2;
            total[3]+=tmp3;
            sum+=tmp+tmp1+tmp2+tmp3;
            printf("%5d     |%10.0f%9.0f%9.0f%9.0f\n", i++,tmp,tmp1,tmp2,tmp3);
        }
        printf("===================================================\n");
        printf("  Total   |%10.0f%9.0f%9.0f%9.0f\n",total[0],total[1],total[2],total[3]);
        printf("  Rate    |%10.4f%9.4f%9.4f%9.4f\n",total[0]/sum,total[1]/sum,total[2]/sum,total[3]/sum);
        for (i = 0; i < 4; ++i) {
            rate[i]=total[i]/sum;
            if(i==0)
                first=i;
            else {
                if(i==1) {
                    if(total[i]>total[0]) {
                        sec=first;
                        first=i;
                    }
                    else {
                        sec=i;
                    }
                }
                else {
                    if(total[i]>total[first]) {
                        sec=first;
                        first=i;
                    }
                    else {
                        if (total[i]>total[sec]) {
                            sec=i;
                        }
                    }
                }
            }
            if(rate[i]>0.5){
                newM++;
                first=i;
            }
        }
        printf("\n");
        if(newM)
            printf("The new Mayor is %s\n", name[first]);
        else
            printf("Because no one's rate excees 50%%\nThe mayor will be eleceted between\n%s and %s\n",name[first],name[sec]);
    }
    system("PAUSE");
    return 0;
}
