//Increment portion can be declared inside loop instead of declaring at loop control variable space

#include <stdio.h>

int main(){
    int i; 
    for(i=1; i<11;){
        printf("%d\n", i);
        i++;
    }
    return 0;
}