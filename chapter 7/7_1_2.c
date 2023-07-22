#include<stdio.h>

float avg(void);

int main()
{

    printf("Average is %f",avg());

    return 0;
}

float avg(void){
    
    float sum=0.0, a;
    
    printf("Enter ten numbers:");
    for(int i=0;i<9;i++){
    scanf("%f",&a);
    sum = sum + a;
    }

    return sum/10.0;
}