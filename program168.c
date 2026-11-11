// Input : 6457     -> 22   -> 5.5
// Input : 734      -> 14   -> 4.66
// Input : 45       -> 9    -> 4.5

#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    // Logic
}


int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %f\n",fRet);

    return EXIT_SUCCESS;
}