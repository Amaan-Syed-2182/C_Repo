/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
	int start;
	int end;
	int prime_count = 0;



	printf("Enter starting number: ");
	scanf("%d",&start);

	printf("\nEnter ending number: ");
	scanf("%d",&end);

	if(start<=1)
	{
		printf("\nInvalid input...try value greater than 1");
	}

	printf("\nPrime numbers are: ");

	for(int n=start; n<=end; n++)
	{
		int count=0;

		for(int i =2; i*i<n; i++)
		{
			if(n%i==0)
			{
				count += 1;
				break;
			}

		}

		if(count==0)
		{
			printf("%d ",n);
			prime_count += 1;

		}
	    
	}

	printf("\ntotal Prime numbers: %d",prime_count);
	return 0;
}