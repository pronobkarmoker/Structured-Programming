#include <stdio.h>
int main()
{
    for (int i = 17; i <= 100; i++)
    {
        if (i % 17 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}