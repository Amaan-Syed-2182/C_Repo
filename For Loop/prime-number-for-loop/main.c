/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num ;
    int count=0;
    
    printf("\nEnter a Number: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    
    if(count==2)
    {
        printf("\nNumber %d is Prime",num);
    }
    else
    {
        printf("\nNumber %d is Not Prime",num);
    }
    
    
    return 0;
}
