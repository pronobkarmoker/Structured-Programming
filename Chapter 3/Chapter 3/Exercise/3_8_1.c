#include <stdio.h>

int main(){
    int i;
    for(i=1; i<=100; i++){
        if(i%2==1) continue;
        else printf("%d\n", i);
    }
    return 0;
}