#include<stdio.h>
#define n 100

void main()
{
	int i;
	for(i=1;i<n;i++)
	{
		if(i%3==0 && i%5==0)
		{
			printf(" Fizz Buzz, ");
		}
		else
		{
			if(i%3==0 || i%5==0)
			{
				if(i%3==0)
				{
					printf(" Fizz, ");
				
				}
				else
				{
					if(i%5==0)
				{
					printf(" Buzz, ");
				}
				}
				
			}
			else
			{
				printf(" %d ",i);		
			}
		}
	}
printf("\n");
}
