#include<stdio.h>
#include<conio.h>

int top=-1;
int push(int top,int item,int n,int stack[]);
int pop(int top,int item,int stack[]);

int push(int top,int item,int n,int stack[])
{
	if(top==n)
	{
		printf("stack overflow\n");
	}
	else
	{
		top=top+1;
		stack[top]=item;
	}
}
int pop(int top,int item,int stack[])
{
	if(top==-1)
	{
		printf("stack empty/n");
	}
	else
	{
		item=stack[top];
		top=top-1;
	}
}

int main()
{
	int item,n;
	printf("enter size");
	scanf("%d",&n);
	int stack[n];
	
	
}
