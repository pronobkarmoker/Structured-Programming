#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
    if(argc!=3){
        printf("Enter exactly two arguments");
        return 0;
    }
    
    int value=strcmp(argv[1],argv[2]);
    if(value<0) printf("%s is greater than %s",argv[2],argv[1]);
    else if(value>0) printf("%s is greater than %s",argv[1],argv[2]);
    else printf("Arguments are same");
    return 0;
}