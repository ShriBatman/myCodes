#include<bits/stdc++.h>

struct node
{
    long long int num;
    char name[21];
    struct node *next;
};


struct node *list;
FILE *fp;
int flag=0;

struct node *getnode()
{
    struct node *temp;
    temp = (struct node*)malloc(sizeof(struct node));

    printf("Enter phone number:\n");
    scanf("%lld",&temp->num);

    printf("Enter Name:\n");
    scanf("%s",&temp->name);

    temp->next = NULL;
    return temp;
}

struct node *search(long long int id)
{
    struct node *cur,*pt;

    if(list==NULL)
        return NULL;

    for(pt=NULL,cur=list;cur!=NULL;pt=cur,cur=cur->next)
    {
        if(cur->num == id)
        {
            flag = 1;
            break;
        }
	}

    return pt;
}

int insert(struct node *ptr)
{
    struct node *pt;
    flag = 0;
    
    pt = search(ptr->num);

    if(list == NULL)
    {
        list = ptr;
        return 0;
    }

    if(flag == 1)
        return -1;
    else
    {
        ptr->next = NULL;
        list->next = ptr;
    }

    return 0;
}

void display()
{
    struct node *cur;
    auto int n=0;

    if(list==NULL)
    {
        printf("List empty!\n");
        return;
    }

    printf("The phone records are:\n");
    
    for(cur=list;cur!=NULL;cur=cur->next)
    {
        printf("Record no. %lld\t",n+1);
        printf("Record phone no.:%lld\t",cur->num);
        printf("Person Name:%s\n",cur->name);
        n++;
    }

}

int del(long long int id)
{
    struct node *pt,*temp;

    if(list==NULL)
        return -1;

    pt=search(id);
    
    if(flag==0)
        return -1;

    if(pt==NULL)
    {
        temp=list;
        list=list->next;
        free(temp);
    }
    else
    {
        temp=pt->next;
        pt->next=temp->next;
        free(temp);
    }
    
    return 0;
}


void enter()
{
    FILE *fp;
    struct node *cur;
    fp=fopen("phone.txt","a");

    cur=list;
    if(cur==NULL)
    {
        printf("The list is empty,nothing to write back:\n");
        return;
    }
    
    for(cur=list;cur!=NULL; cur=cur->next)
    {
    	fprintf(fp,"%lld :: %s\n",cur->num,cur->name);
	}
    fclose(fp);
}

int main()
{
    int c=0;
	int k=0;
	int i;
    long long int value=0;
    struct node *ptr,*new2;

    system("cls");
    
    do
    {
	    system("cls");
        printf("Menu\n");
        printf("1. Add a New phone record.\n");
        printf("2. Delete an existing Record.\n");
        printf("3. show all Records.\n");
        printf("4. Exit.\n");
        printf("Enter your choice:\n");
        scanf("%d",&c);

        switch(c)
        {
        case 1:

            ptr = getnode();
            value = insert(ptr);
            if(value==-1)
                printf("Contact already exists! Please Try Again.\n");
            else
                printf("Details successfully stored\n");
                
            printf("\nPress 0 to return to menu\n");
            scanf("%d",&i);
            if(i==0)
            break;

        case 2:
            printf("Enter the phone no.you wish to delete:\n");
            scanf("%lld",&value);
            k=del(value);

            if(k==-1)
                printf("Record doesnt exist!Try again...\n");
            if(k==0)
                printf("Record deleted!\n");
                
            printf("\nPress 0 to return to menu\n");
            scanf("%d",&i);
            if(i==0)
            break;

        case 3:
            display();
            printf("\nPress 0 to return to menu\n");
            scanf("%d",&i);
            if(i==0)
            break;

       
        case 4:
            printf("Writing back to file.\n");
            enter();
            free(list);
            exit(1);
            break;
        }
    }
    while(1);

}
