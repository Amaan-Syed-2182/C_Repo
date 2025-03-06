/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num;
    int a=0;
    int b=1;
    
    printf("\nEnter the number: ");
    scanf("%d",&num);
    
    printf("%d %d ",a,b);
    
    while(num>=1)
    {
        int next = a+b;
        printf("%d ",next);
        
        a=b;
        b=next;
        
        num--;
    }
    

    return 0;
}