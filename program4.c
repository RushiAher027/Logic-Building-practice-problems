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
//      Step3 : Decide the programming Language
//              we select C programming
//
////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////
//
//          Step4 : Write The Program
//          
////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    int iValue1, iValue2, iResult;  //Uninitialize Local Variable may Contain Garbage

    printf("Enter the 1st No:\n");
    scanf("%d",&iValue1);
    
    printf("Enter the 2nd No:\n");
    scanf("%d",&iValue2);
    
    iResult = iValue1 + iValue2 ;         // Bussiness Logic
    printf("%d\n",iResult);

    return 0;
}