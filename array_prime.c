#include<stdio.h>

int isprime(int n)
{
	int j=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
			j=j+1;;
	}
	if(j>0)
		return 0;
	else
		return 1;
}

void main()
{
	int n,i,j=0;
	printf("please enter size of array\n");
	scanf("%d",&n);
	int array[n];
	int array1[100];
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

	for(i=0;i<n;i++)
	{
		if(isprime(array[i])&&array[i]!=1)
			array1[j++]=array[i];
	}
	for(i=0;i<j;i++)
	{
		if(i%2==0)
			printf(" %d ",array1[i]);
	}
}
