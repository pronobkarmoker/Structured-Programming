#include <stdio.h> 
int main(void){ 

    int a, b; 
    char ch; 
    
    printf("Do you want to:\n") ; 
    printf("Add, Subtract, Multiply or Divide?\n"); 
    printf("Enter first letter :"); 
    ch = getchar();
    printf("\n"); 
    
    printf("Enter first number: \n"); 
    scanf("%d", &a); 
    printf("Enter second number: \n"); 
    scanf("%d", &b); 
    
    if(ch=='A') printf("%d", a+b); 
    else if(ch=='S') printf("%d", a-b); 
    else if(ch=='M') printf("%d", a*b); 
    else if(ch=='D' && b!=0) printf("%d", a/b); 
    return 0;
    
}