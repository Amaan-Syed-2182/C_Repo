/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the Number: ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("*");
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
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");
    }
    
    
    
    
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                printf("*");
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
                printf("*");
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
