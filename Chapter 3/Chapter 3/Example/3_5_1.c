//using Char for choosing menu

#include <stdio.h>

int main(){
    int a, b;
    char ch;
    
    printf("Do you want to: \n");
    printf("Add, subtract, Multiple or Divide?\n");
    printf("Enter first letter : \n");    
    do{
        printf("Enter first letter :  \n");
        ch = getchar();
    }while(ch!='A' && ch!='S' && ch='M' && ch!='D');
    printf("\n");
    
    
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    
    if(ch=='A') printf("%d", a+b);
    if(ch=='S') printf("%d", a-b);
    if(ch=='M') printf("%d", a*b);
    if(ch=='D' && b!=0) printf("%d", a/b);
    
    return 0;
}