/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
     int sum=0;
     for(int i=1;i<=500;i++)
     {
         if(i%7==0)
         {
             sum+=i;
         }
     }
     
     printf("\nSum of multiple of Seven is: %d",sum);

    return 0;
}