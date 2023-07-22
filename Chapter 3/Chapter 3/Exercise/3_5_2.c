#include <stdio.h>

int main(){
    int i;
    do{        
        printf("Mailing list menu:\n\n");
        printf("1. Enter addresses.\n\n");
        printf("2. Delete addresses.\n\n");
        printf("3. Search the list.\n\n");
        printf("4. Print the lish.\n\n");
        printf("5. Quit.\n\n");
        
        printf("Choose a command :\n\n");
        scanf("%d", &i);
        
    }while(i!=5);
    
    return 0;
}