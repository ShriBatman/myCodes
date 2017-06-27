#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void circular();
void display();

struct list{
	int info;
	struct list *next;
}*ptr,*temp,*start;

void circular()
{
	int i ;
	char ch;
	
	for(ptr=start;ptr!=NULL;)
	{
		printf("enter info\n");
		scanf("%d",&i);
		ptr->info=i;
		ptr->next=start;
		printf("want to continue\n");
		fflush(stdin);
		scanf("%c",&ch);
		
		if(ch=='y'||ch=='Y')
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
	temp=start;
	do
	{
		printf("%d\n",temp->info);
		temp=temp->next;
	}
	while(temp!=start);
}

void main()
{
	ptr=(struct list *)malloc(sizeof(struct list));
	start=ptr;
	circular();
	display();
}
