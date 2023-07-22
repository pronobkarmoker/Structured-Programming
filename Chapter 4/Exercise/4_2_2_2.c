#include<stdio.h>

void soundspeed(float distance);

int main()
{   
     float distance;
     printf("Enter distance:");
     scanf("%f",&distance);
     soundspeed(distance);
    
    return 0;
}

void soundspeed(float distance){

     printf("Time taken= %.2f seconds",distance/1129.0);
}