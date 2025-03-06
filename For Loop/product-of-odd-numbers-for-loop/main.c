/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    int product = 1;
    
    printf("Enter the Number: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        if(i%2==1)
        {
            product *= i;
        }
    }
    
    printf("\nProduct is: %d",product);
    return 0;
}
