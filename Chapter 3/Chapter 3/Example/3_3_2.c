//loop control variable can be initialize before loop


#include <stdio.h>

int main(){
    int i;
    printf("Enter a number : \n");
    scanf("%d", &i);
    
    for(; i; i--){
        printf("%d\n", i);
    }
    return 0;
}