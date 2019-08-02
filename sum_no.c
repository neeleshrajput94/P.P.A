#include<stdio.h>

int sum_no(int no)
{
int sum=0;
int rem=0;
	while(no != 0)
	{
	rem = no % 10;
	sum = sum + rem;
	no = no/10;
	}
return sum;
}

void main()
{
	int l,f,no;
printf("please enter any no\n");
scanf("%d",&no);
printf("please enter range\n");
scanf("%d%d",&l,&f);
for(int i=l;i<=f;i++)
{
	if (sum_no(i)==sum_no(no))
	{
		printf(" %d ",i);
	}
}

}
