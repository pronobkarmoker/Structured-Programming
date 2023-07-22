#include <stdio.h>
int main(){
    char ch[10], min;
    int i;
    for(i=0; i<10; i++){
        ch[i]=getchar();
    }
    min = ch[0];
    for(i=0;i<9; i++){
        if(ch[i+1]<ch[i]) min = ch[i+1];
    }
    printf("%c", min);
    return 0;
}