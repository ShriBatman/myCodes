#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void create();
void reverse();
void display();

struct list{
	int info;
	struct list *next;
}*start,*ptr,*temp,*temp1,*cur,*prev;

void create()
{
	int i;
	char ch;
	
	for(ptr=start;ptr!=NULL;)
	{
		printf("enter info\n");
		scanf("%d",&i);
		ptr->info=i;
		ptr->next=NULL;
		printf("want to continue\n");
		fflush(stdin);
		scanf("%c",&ch);
		
		if(ch=='y' || ch=='Y')
		{
			ptr->next=(struct list *)malloc(sizeof(struct list));
			ptr=ptr->next;
		}
		else
		{
			ptr=NULL;
		}
	}
}

void display()
{
	temp1=start;
	while(temp1!=NULL)
	{
		printf("%d\n",temp1->info);
		temp1=temp1->next;
	}
}

void reverse()
{
	prev=NULL;
	cur=start;
	temp=cur->next;
	
	while(cur!=NULL)
	{
		cur->next=prev;
		prev=cur;
		cur=temp;
		if(temp!=NULL)
		{
		temp=temp->next;
	    }
	}
	start=prev;
}

void main()
{
	start=NULL;
	ptr=(struct list *)malloc(sizeof(struct list));
	start=ptr;
	create();
	display();
	printf("\n reverse linked list \n");
	reverse();
	display();
}
