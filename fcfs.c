#include<stdio.h>

int arrival[100];
int burst[100];
int complet[100];
int turn[100];
int wait[100];

void complete(int burst[],int arrival[])
{
	int i=0;
	int k=0;
	for(i=0;i<5;i++)
	{	
	/*	if(complet[k]<arrival[i+1])
		{
		//	printf("aaaaaaaaaaaaaa%d %daaaaaaaaaaaaa",complet[i],arrival[i+1]);
			complet[k++]=complet[k-1]+burst[i]+(arrival[i+1]-complet[k]);
		//	printf("%d",complet[k]);
		}
		else*/
		complet[k++]=complet[k-1]+burst[i];
	}
	for(i=0;i<k;i++)
	{
		printf(" %d ",complet[i]);
	}
}

void turnaround(int arrival[])
{
	int i,k=0;
	for(i=0;i<5;i++)
	{
		turn[k++]=complet[i]-arrival[i];
	}
	for(i=0;i<k;i++)
        {
                printf(" %d ",turn[i]);
        }
}

void waiting(int turn[],int burst[])
{
	int i,k=0;
	for(i=0;i<5;i++)
	{
		wait[k++]=turn[i]-burst[i];
	}
	for(i=0;i<k;i++)
	{
		printf(" %d ",wait[i]);
	}
}

int add_array(int array[])
{
	int i,sum=0;
	for(i=0;i<5;i++)
	{
	sum=sum+array[i];
	}
	return sum;

}
float average(int n)
{
	float m=(float)n/5;
	return m;
}



void main()
{
	int n,i;
	int arrival[100];
	int burst[100];
	printf("please enter how many process you entered\n");
	scanf("%d",&n);
	printf("please enter arrival time of all %d process\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arrival[i]);
	}
	printf("arrival time of your all process are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",arrival[i]);
	}
	printf("\nplease enter burst time of %d process\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&burst[i]);
	}
	printf("burst time of your all process are\n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",burst[i]);
	}
	printf("\ncompletion time of all processes are\n");
	complete(burst,arrival);
	printf("\nturn arround time of all processes are\n");
	turnaround(arrival);
	printf("\nwaiting time of all processes are\n");
	waiting(turn,burst);
	printf("\n");
	printf("\naverage turn around time = %f\n",average(add_array(turn)));
	printf("average waiting time = %f\n",average(add_array(wait)));
}
