/*
    Step1 : Understand The Problem Statement
    Step2 : Write the Algorithm
    Step3 : Decide the programming Language
    Step4 : write the Program
    Step5 : Test the Program
*/

////////////////////////////////////////////////////////////////////
//
//  Step1 : Understand The Problem Statement
//  user is going to enter ant two integer 
//  and we perfon addition
//
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
//
//  Step2 : Write the Algorithm
/*          
    Start
        Accept 1st Number As No1
        Accept 2nd Number As No2
        Create the variable as Ans to store the result
        Perform the addition to store int Ans
        Display The Result of Ans
    End
*/
//
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
//
//  Step3 : Decide the programming Language
//          we select C programming
//
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
//
//  Step4 : Write The Program
//          
////////////////////////////////////////////////////////////////////

#include<stdio.h>

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

int Addition(int iNo1,int iNo2)
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

    return 0;
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
