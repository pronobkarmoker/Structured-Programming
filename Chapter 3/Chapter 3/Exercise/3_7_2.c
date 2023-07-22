#include <stdio.h>
#include <conio.h>
int main(){
    float i;
    char ch;
    
    for(i=1; i<101; i++){
        printf("Tip\t10%c\t15%c\t20%c\n", '%', '%', '%');
        printf("%0.2f\t%0.2f\t%0.2f\t%0.2f\n", i, i*0.1, i*0.15, i*0.2);
        printf("Do you want to continue? (Y/N)\n");
        ch = getche();
        if(ch=='N') break;
    }
    return 0;
}