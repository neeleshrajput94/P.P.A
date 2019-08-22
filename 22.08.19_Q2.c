#include<stdio.h>

char string[]={"acbca"};

int length(char string[])
{
int i=0;
while(string[i] != '\0')
{
	i++;	
}
return i;
}

void pallendrom(char string[])
{

	int i,j,k=0;
	for(i=0,j=length(string)-1;i<length(string)/2+1,j>length(string)/2-1;i++,j--)
	
	{
		if (string[i] == string[j])
		{
			printf("%c %c %d %d\n",string[i],string[j],i,j);
			k=k+1;
		}
	}
		
if(length(string)%2==0)
{
	if(k == length(string)/2)
	{
		printf("string is pallendrom\n");
	}
	else
		printf("string is not pallendrom\n");
}
else
{
	if(k == length(string)/2+1)
        {
                printf("string is pallendrom\n");
        }
        else
                printf("string is not pallendrom\n");

}

}

void main()
{
/*
	int i;
	char string[10];
	printf("please inter string\n");
	for(i=0;i<length(string);i++)
	{
		scanf("%c",&string[i]);	
	}
	printf("your string is \n");
	for(i=0;i<length(string);i++)
	{
		printf("%c",string[i]);
	}
	printf("\n");
*/
	printf(" %d\n ",length(string));
	pallendrom(string);
}
