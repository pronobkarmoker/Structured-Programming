#include <stdio.h>
#include <conio.h>
int main()
{
    char ch, smallest;
    smallest = 'z';
    printf("Enter the 10 char :");

    for (int i = 0; i < 10; i++)
    {
        ch = getche();

        if (smallest > ch)
        {
            smallest = ch;
        }
    }
    printf("\n the smallest char is : %c .", smallest);

    return 0;
}
