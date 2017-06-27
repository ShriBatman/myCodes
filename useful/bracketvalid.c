#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack{
	int top;
	int size;
	char *array;
};

struct stack* create(size)
{
	struct stack* s=(struct stack*)malloc(sizeof(struct stack));
	s->top=-1;
	s->size=size;
	s->array=(char*)malloc((s->size) * sizeof(char));
	return s;
}

int full(struct stack* s)
{
	if(s->top==s->size-1)
	{
		return 1;
	}
	else
	return 0;
}

int empty(struct stack* s)
{
	if(s->top==-1)
	return 1;
	else
	return 0;
}

void push(struct stack* s,char x)
{
	if(full(s))
	return;
	else
	s->array[s->top++]=x;
}

char pop(struct stack* s)
{
	if(empty(s))
	return;
	else
	s->top--;
}

int main()
{
	int i,j,k,n,t;
	struct stack* s=create(100);
	
	char f[100];
	scanf("%s",&f);
	k=0;
	n=0;
	
	for(i=0;i<strlen(f);i++)
	{
		if(f[i]=='(')
		{
		push(s,f[i]);
		k++;
		}
		else if(f[i]==')' && k>0)
		{
			pop(s);
			k--;
		}
		else if(f[i]==')' && k==0)
		{
			printf("no\n");
			n=1;
			break;
		}
	}
	
	
	if(empty(s) && n!=1)
	printf("yes\n");
	else if(n!=1)
	printf("no\n");
	
	return 0;
}
