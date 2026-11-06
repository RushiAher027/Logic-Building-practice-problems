#include<stdio.h>
#include<stdlib.h>

int main()
{
    int no = 0;

    printf("Enter No. :\n");
    if(scanf("%d",&no)!=1)
    {
        printf("Invalid Input");
        
        return EXIT_FAILURE;
        
    }
    
    printf("Input Is Valid\n");

    return EXIT_SUCCESS;
}