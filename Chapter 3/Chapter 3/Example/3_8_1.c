#include <stdio.h>

int main(){
    int i, j, total=0;
    do{
        printf("Enter A number :\n");
        scanf("%d", &i);
        printf("Enter number again : \n");
        scanf("%d", &j);
        if(i!=j){
            printf("mismatch\n");
            continue;
        }
        total = total + i;
    }while(i);
    
    printf("Total is %d.\n", total);
    return 0;
} 