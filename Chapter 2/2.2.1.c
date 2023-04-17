#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the  number:");
    scanf("%d", &a);
    scanf("%d", &b);

    int h;
    printf("what do you want : 0(sum) or 1(product) ");
    scanf("%d", &h);
    if (h==0)
    {
        printf("%d", a+b);
    }
    else if(h==1)
    {
        printf("%d", a*b);
    }
    else
    {
        printf("SORRY!!!!!!!!");
    }

    return 0;
}
