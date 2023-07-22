//using char input for choosing Y/N

#include <stdio.h>

int main(){
    char ch;
    int a, b;
    
    printf("\n\nDo you want to add them (Y/N)?");
    ch = getchar();
    
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter another number : ");
    scanf("%d", &b);
    
    if(ch=='Y') printf("Summation is %d.", a+b);
    if(ch=='N') printf("The END");
    
    return 0;
}