#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct maze{
	int x;
	int y;
	int data;
	int solu;
	struct maze *next;
	struct maze *down;
}*start=NULL,*cur,*newnode,*snew,*scur,*sstart;

struct head{
	struct maze *hnext;
}*hnew;


bool check(int t,int k,int a,int n)
{
	return (k>=0 && k<n && t>=0 && t<n && a==1);
}

bool solvemaze(struct maze* rat,struct head* hptr,int n)
{
	int t,k,a;
	
	struct maze* pt=hptr->hnext;
	struct maze* pt1=hptr->hnext;
	
	if(rat->x==n-1 && rat->y==n-1)
	{
		rat->solu=1;
		return true;
	}
	
	t=rat->y;
	k=rat->x;
	a=rat->data;
	
	if(check(t,k,a,n)==true)
	{
		rat->solu=1;
		
		if(solvemaze(rat->next,hptr,n)==true)
		{
		   return true;
		}
		else
		{
			t=t+1;
			while(t--)
			{
				pt=pt->down;
			}
			while(k--)
			{
				pt=pt->next;
			}
		}
		
		if(solvemaze(pt,hptr,n)==true)
		{
			return true;
		}
		else
		{
			t=t-1;
			while(t--)
			{
				pt1=pt1->down;
			}
			while(k--)
			{
				pt1=pt1->next;
			}
		}
		
		if(solvemaze(pt1,hptr,n)==true)
		{
			return true;
		}
		
		rat->solu=0;
		return false;
	}
	
	return false;
}


struct maze* solve(struct maze* ptr,struct head* hptr,int n)
{
	if(solvemaze(ptr,hptr,n)==false)
	{
		printf("solution does not exist\n");
		return ptr;
	}
	
	return ptr;
}


int main()
{
	int i,j,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		newnode = (struct maze *) malloc (sizeof(struct maze));
		scanf("%d",&newnode->data);
		newnode->x=0;
		newnode->y=i;
		newnode->solu=0;
		newnode->next=NULL;
		newnode->down=NULL;
		sstart=NULL;
		
		if(start==NULL)
		{
			start=newnode;
			cur=newnode;
		}
		else
		{
			cur->down=newnode;
			cur=newnode;
		}
		
		for(j=1;j<n;j++)
		{
			snew = (struct maze*) malloc (sizeof(struct maze));
			scanf("%d",&snew->data);
			snew->x=j;
			snew->y=i;
			snew->solu=0;
			snew->next=NULL;
			snew->down=NULL;
			
			if(sstart==NULL)
			{
				sstart=snew;
				cur->next=snew;
				scur= snew;
			}
			else
			{
				scur->next=snew;
				scur=snew;
			}
		}
	}
	
	
	struct head* hnew=(struct head*) malloc(sizeof(struct head));
	hnew->hnext=start;
	
	printf("created the maze\n");
	
	struct maze *temp = solve(start,hnew,n);
	struct maze *tem = NULL;
	
	while(temp!=NULL)
	{
		tem=temp;
		
		while(tem!=NULL)
		{
			printf("%d\t",tem->solu);
			tem=tem->next;
		}
		
		temp=temp->down;
		printf("\n");
	}
	
	return 0;
}   
