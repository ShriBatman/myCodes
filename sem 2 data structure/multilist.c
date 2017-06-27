#include<stdio.h>
#include<conio.h>

struct student{
	char name[20];
	struct student *next;
	struct score *mark;
}*start=NULL,*cur,*newnode;

struct score{
	int s;
	struct score *snext;
}*sstart=NULL,*scur,*snew;

void main()
{
	char c,a;
	
	do
	{
		newnode = (struct student *) malloc (sizeof(struct student));
		fflush(stdin);
		scanf("%s",&newnode->name);
		newnode->next=NULL;
		newnode->mark=NULL;
		
		if(start==NULL)
		{
			start=newnode;
			cur=newnode;
		}
		else
		{
			start->next=newnode;
			cur->next=newnode;
			cur=newnode;
		}
		
		do
		{
			snew = (struct score*) malloc (sizeof(struct score));
			scanf("%d",&snew->s);
			snew->snext=NULL;
			
			if(sstart==NULL)
			{
				sstart=snew;
				cur->mark=sstart;
				scur= snew;
			}
			else
			{
				sstart->snext=snew;
				scur->snext=snew;
				scur=snew;
			}
			
			printf("\npress Y to continue\n");
			fflush(stdin);
			scanf("%c",&c);
		}
		while(c=='Y');
			
		
		printf("\npress Y to continue\n");
		fflush(stdin);
		scanf("%c",&a);
	}
		while(a=='Y');
}
