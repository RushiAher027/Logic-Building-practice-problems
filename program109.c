#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    int iSum = 0;

    for (iCnt =1; iCnt <= iNo/2; iCnt++)
    {
        if ((iNo %iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    if (iSum == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main(void)  // (void) is same as ()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter No. : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);
    if (bRet)  // Same work as bRet == true not suggested
    {
        printf("It is Prime Number \n");
    }
    else
    {
        printf("It is Not Prime Number \n");
    }
    

    return EXIT_SUCCESS;
}