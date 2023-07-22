#include<stdio.h>

void rec_copy(char *s1,char *s2);

int main(){
    char str[]="Samdani";
    char copy[100];
    rec_copy(copy,str);
    printf(copy);

    return 0;
}

void rec_copy(char *s1,char *s2){
    if(*s2){
        *s1++=*s2++;
        rec_copy(s1,s2);
    }else{
        *s1='\0';
    }
}