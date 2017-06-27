#include<stdio.h>
#include<stdlib.h>

struct head
{
	int rowno;
	struct head *down;
	struct node *right;
}*ptr=NULL,*headnode,*cur,*temp;

struct node
{
	int row;
	int col;
	int data;
	struct node *rt;
}*pt=NULL,*newnode,*curr,*temp1;

int main()
{
	int i,j,k,l,x,y,m,n;
	
	scanf("%d",&i);
	scanf("%d",&j);
	
	int arr[i][j];
	
	for(k=0;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			scanf("%d",&arr[k][l]);
		}
		printf("\n");
	}
	
	for(x=0;x<i;x++)
	{
		pt=NULL;
		headnode=(struct head *) malloc (sizeof(struct head));
		headnode->right=NULL;
		headnode->down=NULL;
		headnode->rowno=x;
		
		if(ptr==NULL)
		{
			ptr=headnode;
			cur=headnode;
		}
		else
		{
			cur->down=headnode;
			cur=headnode;
		}
		
		for(y=0;y<j;y++)
		{
			n=arr[x][y];
			
			if(n!=0)
			{
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->rt=NULL;
			newnode->row=x;
			newnode->col=y;
			newnode->data=n;
			
			if(pt==NULL)
			{
				pt=newnode;
				curr=newnode;
				cur->right=newnode;
			}
			else
			{
				curr->rt=newnode;
				curr=newnode;
			}
			
			}
		}
	}
	
	temp=ptr;
	while(temp!=NULL)
	{
		printf("%d\t",temp->rowno);
		temp1=temp->right;
		while(temp1!=NULL)
		{
			printf("%d %d %d\t",temp1->row,temp1->col,temp1->data);
			temp1=temp1->rt;
		}
		temp=temp->down;
		printf("\n");	
	}
	
	
	return 0;
}
