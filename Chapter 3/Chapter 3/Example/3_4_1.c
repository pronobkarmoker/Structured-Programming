#include <stdio.h> 
#include <conio.h> 

int main(void)
{  
    char ch; 
    ch = getche(); 
    while(ch!='q') ch = getche(); 
    printf("Found the q."); 
    return 0;
}