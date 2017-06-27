#include<stdio.h>
#include<stdlib.h>

struct node{

    int data;
    struct node *next;
} *ptr=NULL,*cur,*newnode,*temp;

struct node* alternate(struct node *ptr)
{
	struct node* head;
	struct node* t;
	head=ptr;
	t=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        ptr=ptr->next;
        head->next=ptr;
        head=head->next;
    }
    head=t;
    
    return head;
}

int main()
{
    int x;
    char c;

    do
    {
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->next=NULL;
        scanf("%d",&x);
        newnode->data=x;

        if(ptr==NULL)
        {
            ptr=newnode;
            cur=newnode;
        }
        else
        {
            cur->next=newnode;
            cur=newnode;
        }

        printf("press y to continue\n");
        fflush(stdin);
        scanf("%c",&c);

    }
    while(c=='y');
	
	temp=alternate(ptr);
	
	
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    return 0;
}
