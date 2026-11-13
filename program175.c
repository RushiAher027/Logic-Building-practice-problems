#include<stdio.h>
#include<stdlib.h>

int Reverse(int iNo)
{
    int iDigits = 0, iRev = 0;
    
    while (iNo != 0)
    {
        iDigits = iNo % 10;
        iRev = (iRev *10) + iDigits;
        iNo = iNo / 10;
    }
    
    return iRev;
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);

    printf("Reverse Number is : %d\n",iRet);


    return EXIT_SUCCESS;
}