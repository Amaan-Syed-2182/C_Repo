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
    
    for(int i=1;i<=n;i++)
    {
            for(int j=1;j<=n;j++)
            {
                if(i==1||i==n||j==1||j==n)
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