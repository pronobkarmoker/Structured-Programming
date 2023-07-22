#include<stdio.h>

int main()
{

    int num=1;

    count_label:
    if(num>=11){
       goto finish_label;
    }
    printf("%d ",num);
    num++;
    goto count_label;

    finish_label:
    // printf("Completed!");

    return 0;
}