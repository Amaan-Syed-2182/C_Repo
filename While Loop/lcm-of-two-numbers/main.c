#include <stdio.h>

int main()
{
    int num_1;
    int num_2;
    int i = 2;
    
    printf("Enter first Number: ");
    scanf("%d",&num_1);
    
    printf("Enter second Number: ");
    scanf("%d",&num_2);
    
    while(num_1>1 || num_2>1)
        {
        if(num_1 % i==0 || num_2 % i==0)
            {
             printf("%d ",i);
             
            if(num_1%i==0)
            {
                num_1/=i ;
            }
            
            if(num_2%i==0)
            {
                num_2/=i;
            }
            
        }
        
        else
        {
            i++;
        }
        
    }
    

    return 0;
}