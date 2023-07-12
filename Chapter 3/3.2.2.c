#include<stdio.h>

int main(){
    printf("Enter area : \n");
    char ch = getchar();

    if(ch == 'c'){
        printf("*** CIRCLE ***\n");
        int r;
        scanf("%d",&r);
        printf("AREA: %f", 3.1416*r*r);
    }

    else if(ch == 'r'){
        printf("*** RECTANGLE ***\n");
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        printf("AREA: %d", a*b);
    }

    else if(ch == 't'){
        printf("*** TRIANGLE ***\n");
        int a,b;
        scanf("%d",&a);
        scanf("%d",&b);
        printf("AREA: %f", 0.5*a*b);
    }

    return 0;
}
