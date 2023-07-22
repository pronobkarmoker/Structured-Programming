#include <stdio.h>

int main(){
    char ch;
    ch=getchar();
    while(ch!='\r'){
        printf("%c", ch-1);
        ch = getchar();
    }
    return 0;
}