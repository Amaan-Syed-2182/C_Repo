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
    int fact = 1;
    
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    for(int i=num;i>=1;i--)
    {
        fact*=i;
    }
    
    printf("\nFactorial of %d is: %d",num,fact);

    return 0;
}
