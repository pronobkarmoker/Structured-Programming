#include<stdio.h>

int fact(int n);

int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    printf("Factorial = %d\n", fact(x));
    return 0;
}

int fact(int n){
    int x;
    if(n==0) return 1;
    else {
       return n*fact(n-1); 
    }
}