#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0;
    int no = 0;

    printf("Enter No. :\n");
    ret = scanf("%d",&no);

    printf("Return Value is : %d\n",ret );

    return EXIT_SUCCESS;    //EXIT_SUCCESS is Macro Define in stdlib.h file
}