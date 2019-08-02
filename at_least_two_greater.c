#include<stdio.h>

void main()
{
	int n,i,j,k=0;
	printf("please enter size of array\n");
	scanf("%d",&n);
	int array[n];
	printf("please enter %d values in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("your array is\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
	
	printf("\n");
	printf("all element in array which have at-least two greater element\n");
	for(i=0;i<n;i++)
	{
		k=0;
		for(j=0;j<n;j++)
		{
			if(array[i] < array[j])
			{
				k=k+1;
			}
		}
		if(k>=2)
		{
			printf(" %d ",array[i]);
		}
		
	}
	printf("\n");
}
