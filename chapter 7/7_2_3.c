#include<stdio.h>

void rec(char *p);

int main(){
    char name[100];
    scanf("%s",name);
    rec(name);

    return 0;
}

void rec(char *p){
    if(*p){
        printf("%c ",*p);
        p++;
        rec(p);
    }
}