#include<stdio.h>

int main()
{

    float i;
    for(i=1.0;(int)i<=9;i=i+0.1){
        printf("%.1f\n",i);
    }

    return 0;
}