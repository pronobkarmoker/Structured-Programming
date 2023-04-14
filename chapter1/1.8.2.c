#include <stdio.h>
int convert(void);
int main()
{
   printf("%d", convert());
}

int convert(void)
{
    int dollar;
    printf("enter doller :");
    scanf("%d", &dollar);
    return dollar / 2;
}