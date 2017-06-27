#include <stdio.h>
#include <conio.h>
#include <malloc.h>

void doubly();
void dispaly();

struct list{
	struct list *left;
	int info;
	struct list *right;
}*ptr,*start,*last;

void doubly()
{
	int i;
	char ch;
	
	for(ptr=start;ptr->right!=NULL;)
	{
		printf("enter info\n");
		scanf("%d",&i);
		ptr->info=i;
		ptr->left=NULL;
		ptr->right=NULL;
		printf("want to continue\n");
		fflush(stdin);
		scanf("%c",&ch);
		
		if(ch=='y'||ch=='Y')
		{
			ptr->right=(struct list *)malloc(sizeof(struct list));
			ptr->right->left=ptr;
			ptr=ptr->right;
			
		}
		else
		{
			last=ptr;
		}
	}
}

void display()
{
			while(ptr!=NULL)
	{
		printf("%d\n",ptr->info);
		ptr=ptr->right;
	}
}

void main()
{
	start=NULL;
	ptr=(struct list *)malloc(sizeof(struct list));
	start=ptr;
	doubly();
	ptr=start;
	display();
}
