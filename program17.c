#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iValue = 0 ;

    printf("Enter No. : \n");
    scanf("%d",&iValue);

    if((iValue % 2) ==0)
    {
        printf("It Is Even No.\n");
    }
    else 
    {
        printf("It Is Odd No.\n");
    }
    

    return EXIT_SUCCESS;
}