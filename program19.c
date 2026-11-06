#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) ==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue = 0 ;

    bool bRet = false ;  // False is default value for Boolean Variable

    printf("Enter No. : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);
    
    if(bRet == true)
    {
        printf("It Is Even No.\n");
    }
    else
    {
        printf("It Is Odd No.\n");
    }

    return EXIT_SUCCESS;
}