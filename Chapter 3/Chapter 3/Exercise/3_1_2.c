#include <stdio.h>
int main(){
    
    char ch;
    
    printf("\n\nASCII Value of A to Z.\n");
    
    for(ch='A'; ch<='Z'; ch++){
        printf("%c 's ASCII Value is %d.\n", ch, ch);
    }
    
    printf("\nASCII Value of a to z.\n");
    
    for(ch='a'; ch<='z'; ch++){
        printf("\n%c 's ASCII Value is %d.", ch, ch);
    }
    return 0;
}