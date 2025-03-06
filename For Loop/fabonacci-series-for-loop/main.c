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
    int a = 0;
    int b = 1;
    int next;
    
    printf("Enter a Number: ");
    scanf("%d",&num);
    
    printf("%d %d",a,b);
    
    for(int i=1;i<=num;i++)
    {
        next = a+b;
        printf(" %d",next);
        a = b;
        b = next;
    }

    return 0;
}
