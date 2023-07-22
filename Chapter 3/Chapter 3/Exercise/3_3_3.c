#include <stdio.h>

int main(){
    int a, i;
    a = 1000;
    for(i=1; i<=a; i=i+i){
        printf("%d\n", i);
    }
    return 0; 
}