#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    for (iCnt = 2; iCnt <= iNo/2; iCnt++)  // in this 1 is exempted it not affect on time complexity
    {
        if ((iNo %iCnt) == 0)
        {
           break; // It is suggested to use break in loop insted of return
        }
    }    
    if (iCnt == (iNo/2) + 1 )
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