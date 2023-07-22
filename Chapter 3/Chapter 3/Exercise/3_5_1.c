#include <stdio.h>

int main(){
    float gallon, litter;
    int i, n;
    
    do{
        printf("What do you want to calculate - 1. L2G 2. G2L?\n");
        printf("(Enter 0 to quit)\n");
        scanf("%d", &i);     
    
    if(i==1){
        printf("How much(litter): \n");
        scanf("%f", &litter);
        printf("It's %0.2f gallon\n", litter/3.7854);
    }
    else if(i==2){
        printf("How much(gallon): \n");
        scanf("%f", &gallon);
        printf("It's %0.2f litter\n", gallon*3.7854);
    }
    }while(i!=0);
    
    return 0;
}