#include<stdio.h>
#include<stdlib.h>

////////////////////////////////////////////////////////////////////
//
//  Funtion Name    :   Addition
//  Input           :   Integer,Integer
//  Output          :   Integer
//  Description     :   Perform Addition
//  Date            :   04/10/20026
//  Author          :   Rushikesh Sunil Aher
//          
////////////////////////////////////////////////////////////////////


// K&R Style of code writing
int Addition(
                int iNo1,       // Frist Input
                int iNo2        // Second Input
            )
{
    int iAns=0;
    iAns = iNo1 + iNo2 ;        // Bussiness Logic
    
    return iAns ;
}

////////////////////////////////////////////////////////////////////
//
//  Entry Point of The Applicaton
//          
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter the 1st No:\n");
    scanf("%d",&iValue1);
    
    printf("Enter the 2nd No:\n");
    scanf("%d",&iValue2);
    
    iResult = Addition(iValue1, iValue2) ;         
    
    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;    //EXIT_SUCCESS is Macro Define in stdlib.h file
}

////////////////////////////////////////////////////////////////////
//
//  Step5 : Test The Program
//          
//-----------------------------------------------------------------
//      Input1      Input2      Output
//-----------------------------------------------------------------
//      10          11          21
//      11          0           11
//      0           11          11
//      20          -9          11
//      -9          20          11
//     -20         -11         -31
////////////////////////////////////////////////////////////////////
