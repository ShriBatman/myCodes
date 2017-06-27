#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct list{
	int info;
	struct list *next;
}*ptr,*start,*np;

void main()
{
	int i,j;
	char ch;
	ptr=(struct list *)malloc(sizeof(struct list));
	start = ptr;
	for(ptr=start;ptr->next!=NULL;)
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
			ptr->next=NULL;
		}
	}
	//inserting at the begin
	np=(struct list *)malloc(sizeof(struct list));
	printf("enter info\n");
	scanf("%d",&i);
	np->info=i;
	np->next=start;
	start=np;
	ptr=start;
	
	while(ptr!=NULL)
	{
		printf("%d\n",ptr->info);
		ptr=ptr->next;
	}
	
}
