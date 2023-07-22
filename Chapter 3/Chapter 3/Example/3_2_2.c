#include <stdio.h>

int main(){
    int answer, count;
    int again;
    
    for(count=1; count<11; count++){
        printf("What is %d + %d?", count, count);
        scanf("%d", &answer);
        
        if(answer==(count+count)) printf("You're right!\n");
        else {
           printf("Sorry! you're wrong.\n");
           printf("Try Again.\n");
           
            printf("\nWhat is %d + %d?\n", count, count);
            scanf("%d", &answer);
            
            if(answer==(count+count)) printf("You're right!\n");
            else printf("Wrong! Right answer is %d.\n", count+count);              
        }
    }
    return 0;
}