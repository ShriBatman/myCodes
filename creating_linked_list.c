//through do while loop
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct shiv_shakti{
	int room_no;
	int roommates;
	struct shiv_shakti *next;
};
typedef struct shiv_shakti node;

void main()
{
	node *p;
	node *start;
	int a,b;
	char ch;
		
	p=(node *)malloc(sizeof(node));
	start=p;
	
	do{
		printf("enter info");
		scanf("%d %d",&a,&b);
		p->room_no = a;
		p->roommates = b;
		p->next=(node *)malloc(sizeof(node));
		p=p->next;
		printf("press y to continue?");
		fflush(stdin);
		scanf("%c",&ch);
	}
	while (ch=='y' || ch=='Y');
	p->next=NULL;
	p=start;
	
	while(p->next!=NULL)
	{
		printf("room no: %d\nroommates: %d\naddress: %d",p->room_no,p->roommates,p);
		p=p->next;
	}
}
