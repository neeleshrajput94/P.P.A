#include<stdio.h>
#include<stdlib.h>
//create node
struct node
{
	int data;
	struct node* link;
};
struct node* root=NULL;

void enqueue()
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	 if(temp==NULL)
        {
                printf("link list is empty\n");
        }
        else
        {

	printf("please enter node data : \n");
	scanf("%d",&temp->data);
	temp->link=NULL;

	if(root==NULL)		//list is null
	{
		root=temp;
	}
	else			//list is not null
	{
		struct node* p;
		p=root;
		while(p->link != NULL)
		{
			p=p->link;
		}
		p->link=temp;
	}
	}
}



int length()
{
	int count=0;
	struct node* temp;
	temp=root;
	while(temp != NULL)
	{
		count++;
		temp=temp->link;
	}
	printf("length=%d\n",count);
	return count;
}

void display()
{
	struct node* temp;
	temp=root;
	
	if(temp==NULL)
	{
		printf("link list is empty\n");
	}
	else
	{
		while(temp != NULL)
		{
			printf("%d\t",temp->data);
			temp=temp->link;
		}
	}
}

void dequeue()
{
	struct node* temp=root;
	 if(temp==NULL)
        {
                printf("link list is empty\n");
        }
        else
        {

	                root=temp->link;
	                temp->link=NULL;
	                free(temp);
	}
	           
	
}

void peek()
{
	 struct node* temp=root;
	 if(temp==NULL)
        {
                printf("link list is empty\n");
        }
        else
	{
	struct node* temp=root;
		printf(" your peek element is %d \n ",temp->data);
	}
}
void main()
{
	int choice;
	while(1)
	{
		printf("\nqueue using  linked list operations:\n");
		printf("1.enqueue\n");
		printf("2.display\n");
		printf("3.dequeue\n");
		printf("4.peek\n");
		printf("5.quit\n");

		printf("please enter your choice : \n");
		scanf("%d",&choice);
		
		switch(choice)
		{
			case 1 : enqueue();
				break;
			
			case 2 : display();
				break;
			case 3 : dequeue();
				break;
			case 4 : peek();
				break;
			case 5 : exit(0);
				break;

			default : 
				printf("please enter valid choice\n");
				
		}
	}
 
}
