#include<stdio.h>
#include<stdlib.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;    
    }

    return iCount;
}

int SumDigits(int iNo)
{
    int iDigit = 0;
    int isum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        isum = isum + iDigit;
        iNo = iNo / 10;
    
    }

    return isum;
}
int main()
{
    int iValue = 0, iSum =0, iCount = 0;
;
    float fAvg = 0.0f;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iSum = SumDigits(iValue);
    iCount = CountDigits(iValue);

    fAvg = (float)iSum / (float)iCount;


    printf("Numbers Of Digits : %d\n",iCount);
    printf("Summation Of Digits : %d\n",iSum);
    printf("Avrage Of Digits : %.2f\n",fAvg);

    return EXIT_SUCCESS;
}