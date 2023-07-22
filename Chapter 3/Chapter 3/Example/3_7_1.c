#include <stdio.h> 
#include <conio.h> 
int main(void) {

    int i; 
    char ch;  
    for(i=1; i<10000; i++){ 
        if(!(i%6)){ 
            printf("%d, more?(Y/N)", i); 
            ch = getche(); 
        if(ch=='N') break;
        printf("\n");
        }
    }
return 0;
}