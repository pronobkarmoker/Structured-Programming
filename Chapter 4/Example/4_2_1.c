#include<stdio.h>

void f1(void);
int count;

int main()
{
    
   count=10;
   f1();
   printf("Count in main() : %d\n",count); 

    return 0;
}

void f1(void){
    int count=100;
    printf("Count in f1() : %d\n",count);
}