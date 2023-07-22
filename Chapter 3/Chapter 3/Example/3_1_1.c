//using getche() function 

#include <stdio.h>
#include <conio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    ch = getche();
    printf("\nIt's ASCII value is %d.", ch);
    
    return 0;
}