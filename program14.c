#include "header14.h"  //Due To Dubble Cot "" Header file will search between source file then Inbuild <> is visevarsa.

////////////////////////////////////////////////////////////////////
//
//  Entry Point of The Applicaton
//          
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter the 1st No:\n");
    if(scanf("%d",&iValue1) != 1)
    {
        fprintf(stderr,"Unable To Proceed As Input is Invalid");
        return EXIT_FAILURE;
    }
    
    printf("Enter the 2nd No:\n");
    if(scanf("%d",&iValue2) != 1)
    {
        fprintf(stderr,"Unable To Proceed As Input is Invalid");
        return EXIT_FAILURE;    
    }
    
    iResult = Addition(iValue1, iValue2) ;         
    
    printf("Addition is : %d\n",iResult);

    return EXIT_SUCCESS;    //EXIT_SUCCESS is Macro Define in stdlib.h file
}
