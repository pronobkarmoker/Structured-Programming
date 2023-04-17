#include <stdio.h>
int main()
{
    int a, b, n;
    printf("enter 0(sum) or 1(subtracts)");
    scanf("%d", &n);

    if (n == 0)
    {
        printf("enter the numbers");
        scanf("%d", &a);
        scanf("%d", &b);

        printf("%d", a + b);
    }
    else
    {
        printf("enter the numbers");
        scanf("%d", &a);
        scanf("%d", &b);

        printf("%d", a - b);
    }
    return 0;
}