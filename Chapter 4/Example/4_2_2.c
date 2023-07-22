#include<stdio.h>

int m,e;
int power(void);

int main()
{
   m=2;
   e=3;
   printf("%d raised to the %d power is %d",m,e,power());
    return 0;
}

int power(void){
    int temp1,temp2;
    temp1=1;
    temp2=e;
    for(;temp2>0;temp2--){
        temp1=temp1*m;
    }
    return temp1;
}