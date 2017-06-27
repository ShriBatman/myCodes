#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct tree{
	struct tree * left;
	struct tree * right;
	int data;
};

bool fold(struct tree* x,struct tree* y)
{
	if(x==NULL && y==NULL)
	return true;
	else if((x!=NULL && y==NULL) || (x==NULL && y!=NULL))
	return false;
	else
	{
		return fold(x->left,x->right)&&fold(y->left,y->right);
	}
}

struct tree* newnode(int data)
{
	struct tree* ptr=(struct tree*)malloc(sizeof(struct tree));
	ptr->left=NULL;
	ptr->right=NULL;
	ptr->data=data;
	
	return ptr;
}

struct tree* construct(struct tree* root,int a)
{
	if(root==NULL)
	return newnode(a);
	
	else
	{
		if(a<root->data)
		{
			if(root->left==NULL)
			root->left=newnode(a);
			else
			root->left=construct(root->left,a);
		}
		else if(a>root->data)
		{
			if(root->right==NULL)
			root->right=newnode(a);
			else
			root->right=construct(root->right,a);
		}
	}
	
	return root;
}

void inorder(struct tree * root)
{
	if(root!=NULL)
	{
	inorder(root->left);
	printf("%d\n",root->data);
	inorder(root->right);
	}
}

int main()
{
	int size,i;
	struct tree* root=NULL;
	struct tree* start=NULL;
	
	int arr[]={50,30,20,40,70,60,80};
	size=sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<size;i++)
	{
		if(i==0)
		{
			root=construct(root,arr[i]);
			start=root;
		}
		else
		{
			root=construct(root,arr[i]);
		}
	}
	
	root=start;
	inorder(root);
	
	if(fold(root->left,root->right))
	{
		printf("\nFOLDABLE\n");
	}
	else
	{
		printf("\nNOT FOLDABLE\n");
	}
	
	return 0;
}
