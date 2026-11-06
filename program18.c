#include<stdio.h>
#include<stdlib.h>


void CheckEven(int iNo)
{
    if((iNo % 2) ==0)
    {
        printf("It Is Even No.\n");
    }
    else 
    {
        printf("It Is Odd No.\n");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter No. : \n");
    scanf("%d",&iValue);

    CheckEven(iValue);

    return EXIT_SUCCESS;
}