#include <stdio.h>
#include <conio.h>

int main(){
    char ch;
    for(ch=getchar(); ch!='q'; ch=getchar());
    printf("\nFound the q.\n");
    return 0;
}