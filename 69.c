#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    char num_str[12];
    int flag,sign_flag,exp_flag,exp_sign_flag,state,i;
    double number,exp_number,power;
    FILE *in;
    in=fopen("69.txt","r");
    if (!in) {
        printf("Can't find any information!!!\n");
        return 1;
    }
    else {
        printf("\n");
        printf("    String      Number       Flag  \n");
        printf("-----------------------------------\n");
        while(fscanf(in,"%s",num_str)!=EOF) {
            flag=0;
            sign_flag=0;
            exp_flag=0;
            exp_sign_flag=0;
            state=0;
            number=0;
            exp_number=0;
            power=0;
            for (i = 0; flag==0&&num_str[i]!='\0'; ++i) {
                switch (num_str[i]) {
                    case '+':
                        switch (state) {
                            case 0:
                                state++;
                                break;
                            case 3:
                                state++;
                                break;
                            default:
                                flag=1;
                                break;
                        }
                        break;
                    case '-':
                        switch (state) {
                            case 0:
                                sign_flag=1;
                                state++;
                                break;
                            case 3:
                                exp_sign_flag=1;
                                state++;
                                break;
                            default:
                                flag=1;
                                break;
                        }
                        break;
                    case '.':
                        switch (state) {
                            case 0:
                                state=state+2;
                                break;
                            case 1:
                                state++;
                                break;
                            default:
                                flag=1;
                                break;
                        }
                        break;
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                    case '0':
                        switch (state) {
                            case 0:
                                number=(long)(num_str[i]-0x30);
                                state++;
                                break;
                            case 1:
                                number=number*10+(long)(num_str[i]-0x30);
                                break;
                            case 2:
                                power=power-1;
                                number=number+(long)(num_str[i]-0x30)*pow(10.0,power);
                                break;
                            case 3:
                                exp_number=(long)(num_str[i]-0x30);
                                state++;
                                break;
                            case 4:
                                exp_number=exp_number*10+(long)(num_str[i]-0x30);
                                break;
                        }
                        break;
                    case 'e':
                    case 'E':
                        exp_flag=1;
                        switch (state) {
                            case 0:
                                state=3;
                                break;
                            case 1:
                                state=3;
                                break;
                            case 2:
                                state++;
                                break;
                        }
                        break;
                    default:
                        flag=1;
                        break;
                }
            }
            if (flag==0) {
                if (exp_flag==1) {
                    if (exp_sign_flag==1) 
                        number=number*pow(10.0,exp_number*-1.0);
                    else
                        number=number*pow(10.0,exp_number*1.0);
                }
                if (sign_flag==1) {
                    number=-1*number;
                }
                printf("%10s%12.6lf%11s\n", num_str,number,"True");
            }
            else
                printf("%10s%12s%11s\n", num_str,"Undefind","False");
        }
    }
    system("PAUSE");
    return 0;
}
