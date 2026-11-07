#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1,int iNo2,int iNo3, int iNo4)
{
    if((iNo1 < iNo2) && (iNo1 < iNo3) && (iNo1 < iNo4))
    {
        return iNo1;
    }
    else if((iNo2 < iNo1) && (iNo2 < iNo3) && (iNo2 < iNo4))
    {
        return iNo2;
    }
    else if((iNo3 < iNo1) && (iNo3 < iNo2) && (iNo3 < iNo4))
    {
        return iNo3;
    }
    else
    {
        return iNo4;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0,iValue3 = 0, iValue4 = 0, iResult = 0;

    printf("Enter 1st No. : \n");
    scanf("%d",&iValue1);
    
    printf("Enter 2nd No. : \n");
    scanf("%d",&iValue2);

    printf("Enter 3rd No. : \n");
    scanf("%d",&iValue3);
    
    printf("Enter 4th No. : \n");
    scanf("%d",&iValue3);

    iResult = Minimum(iValue1, iValue2, iValue3,iValue4);

    printf("Minimum of Numbers is : %d\n ",iResult);

    return EXIT_SUCCESS;
}