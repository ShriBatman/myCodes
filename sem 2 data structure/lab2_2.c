#include<stdio.h>

struct nodeA
{
	int data;
	struct nodeA *down;
	struct nodeB *right;
}*ptr=NULL,*cur,*newnode,*temp;

struct nodeB
{
	int data;
	struct nodeB *next;
}*pt=NULL,*curr,*forw,*temp1;



int main()
{
	char ch,x;
	int i,j,k,l;
	
	do
	{
		pt=NULL;
		newnode=(struct nodeA *)malloc(sizeof(struct nodeA));
		scanf("%d",&newnode->data);
		newnode->down=NULL;
		newnode->right=NULL;
		
		if(ptr==NULL)
		{
			ptr=newnode;
			cur=newnode;
		}
		else
		{
			cur->down=newnode;
			cur=newnode;
		}
		
		printf("press y to create sublist\n");
		fflush(stdin);
		scanf("%c",&x);
		
		if(x=='y')
		{
		do
		{
			forw=(struct nodeB *)malloc(sizeof(struct nodeB));
			scanf("%d",&forw->data);
			forw->next=NULL;
			
			if(pt==NULL)
			{
				pt=forw;
				curr=forw;
				cur->right=forw;
			}
			else
			{
				curr->next=forw;
				curr=forw;
			}
			
			printf("press Q to continue\n");
			fflush(stdin);
			scanf("%c",&ch);
		}
		while(ch=='Q');
		
		printf("press Y to continue\n");
		fflush(stdin);
		scanf("%c",&ch);
	}
}
	while(ch=='Y');
	
	
	temp=ptr;
	while(temp!=NULL)
	{
		temp1=temp->right;                       
		printf("%d\t",temp->data);

			while(temp1!=NULL)
			{
				printf("%d\t",temp1->data);
				temp1=temp1->next;
			}
			printf("\n");
			temp=temp->down;
	}
	
	return 0;
}

