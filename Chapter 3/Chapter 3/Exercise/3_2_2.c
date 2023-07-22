#include <stdio.h>

int main(){
    
    char ch;
    
    printf("What's area do you want to calculate?\n");
    printf("1. Circle, 2. Rectangle, 3. Triangle\n");
    scanf("%c", &ch);
    
    if(ch=='1'){
        float r;
        printf("Enter radius of circle : \n");
        scanf("%f", &r);
        printf("Area of circle is : %0.2f.\n", 3.1416*r*r);
    }
    else if(ch=='2'){
        float a, b;
        printf("Enter Length & width of the rectangle : \n");
        scanf("%f %f", &a, &b);
        printf("Area of the rectangle is : %0.2f.\n", 2*(a+b));
    }
    else if(ch=='3'){
        float c, d;
        printf("Enter Base and Height of the triangle : \n");
        scanf("%f %f", &c, &d);
        printf("Area of the triangle is : %0.2f.\n", 0.5*c*d);
    }
    
    return 0;
}