#include <stdio.h>

int main(){
    int i, j, is_prime;
    for(i=2; i<1000; i++){
        is_prime=0;
        for(j=2; j<i; j++){
            if(i%j==0) {
                is_prime=1;
                break;
            }
        }
        if(is_prime==0)printf("%d is a prime number\n", i);
    }
    return 0;
}