#include<stdio.h>
#include<stdlib.h>

struct head
{
	struct head *down;
	struct node *right;
}*ptr=NULL,*headnode,*cur,*temp;

struct node
{
	char ch;
	struct node *rt;
}*pt=NULL,*newnode,*curr,*temp1;

int main()
{
	int i,j,k,l,x,y,m,t,q,flag;
	
	scanf("%d",&i);
	scanf("%d",&j);
	
	m=i*j;
	
	char arr[i][j];
	int n[m];
	
	flag=-1;
	int z=0;
	
	for(k=0;k<i;k++)
	{
		for(l=0;l<j;l++)
		{
			fflush(stdin);
			scanf("%c",&arr[k][l]);
		}
	}
	
	for(x=0;x<i;x++)
	{
		pt=NULL;
		headnode=(struct head *) malloc (sizeof(struct head));
		headnode->right=NULL;
		headnode->down=NULL;
		
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
			q=arr[x][y];
			
			for(t=0;t<m;t++)
			{
				if(n[t]==q)
				{
					flag=0;
					break;
				}
				else
				{
					flag=1;
				}
			}
			
			
			if(flag==1)
			{
				n[z]=q;
				z++;
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->rt=NULL;
			newnode->ch=arr[x][y];
			
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
		printf("\n");
		temp1=temp->right;
		while(temp1!=NULL)
		{
			printf("%c\t",temp1->ch);
			temp1=temp1->rt;
		}
		temp=temp->down;
		printf("\n");	
	}
	
	
	return 0;
}
