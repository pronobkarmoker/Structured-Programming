#include <stdio.h>

void func1();
void func2();
void func3();


int main(){
    func1();
    printf("\n\n");
    func2();
    printf("\n\n");
    func3();
    return 0;
}

void func1(){
    int i, j;
    for(i=1; i<6; i++){
        for(j=1; j<100; j++){
            printf("%d", j);
            if(j==5) break;
        }
        printf("\n");
    }
    return ;
}

void func2(){
    int i=1;
    while(i<100){
        printf("%d ", i);
        i++;
        if(i>10) break;
    }
    return ;
}

void func3(){
    int i=1;
    do{
        printf("%d ", i);
        i++;
        if(i>5) break;
    }while(i<=100);
    return ;
}