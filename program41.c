#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, iNo2)
{
    if(iValue1>iValue2)
    printf("Maximum is : %d\n",iValue1);
    
    else
    printf("Maximum is : %d\n",iValue2);
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter 1st No. : \n");
    scanf("%d",&iValue1);
    
    printf("Enter 2nd No. : \n");
    scanf("%d",&iValue2);


    Maximum(iValue1,iValue2);

    return EXIT_SUCCESS;
}