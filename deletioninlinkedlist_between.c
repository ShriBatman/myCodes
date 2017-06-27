#include <stdio.h>
#include <conio.h>
#include <malloc.h>

struct list{
	int info;
	struct list *next;
}*ptr,*start,*prev;

void main()
{
	int i,j,k;
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
	
	ptr=start;
	printf("enter node to be deleted\n");
	scanf("%d",&j);
	
	for(k=0;k<j-1;k++)
	{
		prev=ptr;
		ptr=ptr->next;
	}
	
	prev->next=ptr->next;
	free(ptr);
	prev=start;
	
	while(prev!=NULL)
	{
		printf("%d\n",prev->info);
		prev=prev->next;
	}
}
