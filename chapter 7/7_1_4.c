#include<stdio.h>

int geta_char(void);

int main()
{
    printf("%c",geta_char());
    return 0;
}

int geta_char(void){
    return 's';
}