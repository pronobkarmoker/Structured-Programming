#include <stdio.h>

int main(){
    int answer, count, chances, right;
    for(count=1; count<11; count++){
        printf("What is %d + %d?\n", count, count);
        scanf("%d", &answer);
        
        if(answer==count+count) printf("Right!.");
        else{
            printf("Sorry! You're wrong.\n");
            printf("Try again.\n");
            right = 0;
            
            for(chances=0; chances<3; chances++){
                printf("What is %d + %d?\n", count, count);
                scanf("%d", &answer);
                if(answer==count+count){
                    printf("You're right!\n");
                    right=1;
                    break;
                }
                else printf("Try Again.\n");
            }
            if(right!=1) printf("Answer is %d.\n", count + count);
        }
    }
    return 0;
}