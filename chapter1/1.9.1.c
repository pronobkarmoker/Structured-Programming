#include <stdio.h>
int outnum(int n);
int main()
{
    outnum(5);
    outnum(9);
    outnum(90);

    return 0;
}
int outnum(int n)
{

    //scanf("%d", &n);
    printf("%d\n", n);
}