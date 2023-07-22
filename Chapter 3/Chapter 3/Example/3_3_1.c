#include <stdio.h>

int main(){
    float distance, avg_velocity, time;
    char ch='a';
    int i, n;
    
    printf("How many times you wants to calculate time : ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++){
        printf("Enter distance : \n");
        scanf("%f", &distance);
        printf("Enter average velocity : \n");
        scanf("%f", &avg_velocity);
    
        time = distance / avg_velocity;
    
        printf("%0.2f\n", time);
    }
    return 0;
}