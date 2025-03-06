/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the number: ");
    scanf("%d",&n);
    
    for(int i=n-1;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                 printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        
        for(int j=n;j>=1;j--)
        {
            if(j<=i)
            {
                 printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    for(int i=2;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                 printf("%d",j);
            }
            else
            {
                printf(" ");
            }
            
            
        }
         for(int j=n;j>=1;j--)
            {
            if(j<=i)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
            }
        printf("\n");
    }
    
  

    return 0;
}