#include<stdio.h>
void main()
{
    int a, b, c;
    printf("enter any 3 numbers: ");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c)
    {
        printf("\n%d is greater", a);
    }
    else{
        if(b>c)
        {
            printf("\n%d is greater", b);
        }
        else
        {
            printf("\n%d is greater", c);
        }
    }
}
