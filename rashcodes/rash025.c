#include<stdio.h>
void main()
{
    int y;
    printf("enter the year: ");
    scanf("%d", &y);
    if(y%100==0)
    {
        if (y%400==0){
            printf("\n leap year");
        }
        else{
            printf("\n not leap year");
        }
    }
    else{
        if(y%4==0){
            printf("\n leap year");
        }
        else{
            printf("\n not leap year");
        }
    }
}


