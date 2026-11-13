#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigits = 0, iRev = 0;
    int iTemp = 0;
    iTemp = iNo;
    
    while (iNo != 0)
    {
        iDigits = iNo % 10;
        iRev = (iRev *10) + iDigits;
        iNo = iNo / 10;
    }

    if (iRev == iTemp)    //Issue solved
    {
        return true;
    }
    
    return false;
    
    
}

int main()
{
    int iValue = 0;
    bool bRet = false;

   
    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    bRet = CheckPallindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Pallindrome\n");
    }
    else
    {
        printf("Number is not Pallindrome\n");
    }


    return EXIT_SUCCESS;
}