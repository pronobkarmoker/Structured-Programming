#include <stdio.h>

int main(){
    float distance, avg_velocity, time;
    
    printf("Enter distance : \n");
    scanf("%f", &distance);
    printf("Enter average velocity : \n");
    scanf("%f", &avg_velocity);
    
    time = distance / avg_velocity;
    
    printf("%0.2f\n", time);
    
    return 0;
}