#include <stdio.h>
int main()
{
    int num, i;

    printf("enter the number:\n");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % 2 == 0)
        {
            printf("%d", i);
        }
        else
        {
            printf("SORRY!!!");
        }
    }
    return 0;
}