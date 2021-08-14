#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int inputTester(char *number);
int power(int base,int times);

int main()
{
    char number[100];
    gets(number);
    int n = inputTester(number);
    int i,sum=0,p=0;
    strrev(number);
    for(i=0;number[i]!='\0';i++){
        p = number[i] - '0';
        sum = sum + (p*power(8,i));
    }
    printf("The Decimal form of %d is : %d",n,sum);
    return 0;
}

int inputTester(char *string){
    int i,flag = 0;
    for(i=0;string[i]!='\0';i++){
        if(string[i]>'7' && string[i]<'0')
            flag = 1;
    }
    if(flag==1){
        printf("Invalid input\n");
        exit(0);
    }
    else
        return atoi(string);
}

int power(int base,int times){
    if (times == 0)
        return 1;
    if (base == 0)
        return 0;
    else
        return base * power(base,times-1);
}
