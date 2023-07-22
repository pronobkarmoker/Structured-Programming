//Old declaration form of function in program 

#include <stdio.h>

double f_to_m(double f)

int main(void){
    double feet;
    printf("Enter feet: ");
    scanf("%lf", &feet);
    printf("Meters: %f", f_to_m(feet));
    
    return 0;
}

double f_to_m(f)
double f
{
    return f/3.28;
}