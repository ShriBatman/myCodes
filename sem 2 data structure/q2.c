#include<stdio.h>
#include<stdlib.h>

struct node{

    char data;
    struct node *next;
    struct node *prev;
} *ptr=NULL,*cur,*newnode,*temp;

int main()
{
	int k=0;
    char q;

       do
    {
        newnode=(struct node *)malloc (sizeof(struct node));
        newnode->next=NULL;
        newnode->prev=NULL;
        fflush(stdin);
        scanf("%c", &newnode->data);
        k++;

        if(ptr==NULL)
        {
            ptr=newnode;
            cur=newnode;
        }
        else
        {
            cur->next=newnode;
            newnode->prev=cur;
            cur=newnode;
        }

        printf("press y to continue\n");
        fflush(stdin);
        scanf("%c",&q);

    }
    while(q=='y');
    
    int t=0;
    temp=ptr;

    while(t<k/2)
    {
        if(temp->data==cur->data)
        {
            temp=temp->next;
            cur=cur->prev;
        }
        else
        {
            printf("no\n");
            return 0;
        }
        t++;
    }
    printf("yes\n");

    return 0;
}
