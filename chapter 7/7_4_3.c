#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[]){
    if(argc!=4){
        printf("Enter 3 arguments (including 2 numbers & 1 command): ");
        return 0;
    }
    
    int num1=atoi(argv[2]);
    int num2=atoi(argv[3]);
    if(!strcmp(argv[1],"add")) printf("Sum is %d\n",num1+num2);
    else if(!strcmp(argv[1],"subtract")) printf("Subtraction is %d\n",num1-num2);
    else if(!strcmp(argv[1],"multiply")) printf("Multiplication is %d\n",num1*num2);
    else if(!strcmp(argv[1],"divide")){
        if(argv[3]!=0)
        printf("Divison is %d\n",num1/num2);
        else printf("Can not divide by zero!\n");
    }

    return 0;
}