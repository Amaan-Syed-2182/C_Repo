/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int count = 0;
    int sum = 0;
    
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        sum+=i;
        count++;
    }
    
    printf("\nAverage is %d/%d: %d",sum,count,sum/count);


    return 0;
}