#include <stdio.h>

int main(){
    int a, b;
    char ch;
    
    printf("Do you want to\n");
    printf("ADD, SUBTRACT, MULTIPLE or DIVIDE?\n");
    
    do{
        printf("Enter first letter.\n");
        ch=getchar();
    }while(ch=='A' && ch=='S' && ch=='M' && ch=='D');
    printf("\n");
    
    printf("Enter first number : \n");
    scanf("%d", &a);
    printf("Enter second number : \n");
    scanf("%d", &b);
    
    switch(ch){
        case 'A': printf("Addition is %d", a+b);
        break;
        case 'S': printf("Subtract is %d", a-b);
        break;
        case 'M': printf("Multiply is %d", a*b);
        break;
        case 'D': printf("Division is %d", a/b);
        break;
    }
    return 0;
}