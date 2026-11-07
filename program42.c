#include<stdio.h>
#include<stdlib.h>

int Maximum(int iNo1,int iNo2)
{
    if(iNo1>iNo2)
        return iNo1;
    
    else
        return iNo2;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter 1st No. : \n");
    scanf("%d",&iValue1);
    
    printf("Enter 2nd No. : \n");
    scanf("%d",&iValue2);

    iResult = Maximum(iValue1, iValue2);

    printf("Maximum No. is : %d\n ",iResult);

    return EXIT_SUCCESS;
}