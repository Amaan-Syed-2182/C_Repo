/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int i = 1;
    int fact = 1;
    
    printf("\nEnter the number: ");
    scanf("%d",&num);
    
    while(i<=num)
    {
        fact*=i;
        i++;
        
    }
    printf("\nFactorial of %d is: %d",num,fact);
    

    return 0;
}