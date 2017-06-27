#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct tree{
	int data;
	struct tree* left;
	struct tree* right;
};

struct tree* newnode(int a)
{
	struct tree* ptr=(struct tree*)malloc(sizeof(struct tree));
	ptr->data=a;
	ptr->left=NULL;
	ptr->right=NULL;
	
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
		
		else if(root->data<a)
		{
			if(root->right==NULL)
			root->right=newnode(a);
			else
			root->right=construct(root->right,a);
		}
		
	}
	return root;	
}

struct tree* leftmost(struct tree* pt)
{
	while(pt->left!=NULL)
	{
		pt=pt->left;
	}
	
	return pt;
}

struct tree* mirror(struct tree * ptr)
{	
	struct tree* temp=NULL;
	
	if(ptr==NULL)
	return;
	else
	{
		mirror(ptr->left);
		mirror(ptr->right);
		
		temp=ptr->left;
		ptr->left=ptr->right;
		ptr->right=temp;
	}
	
	return ptr;
}

bool checkmirror(struct tree* root,struct tree* root1)
{
	if(root==NULL && root1==NULL)
	return true;
	else
	{
		if(root->data==root1->data)
		return checkmirror(root->left,root1->left)&&checkmirror(root->right,root1->right);
	}
	
}

void inorder(struct tree* ptr)
{
	if(ptr==NULL)
	return;
	else
	{
		inorder(ptr->left);
		printf("%d\n",ptr->data);
		inorder(ptr->right);
	}
}



int main()
{
	int i,size;
	struct tree* root=NULL;
	struct tree* root1=NULL;
	struct tree* start=NULL;
	
	int arr[]={50,30,20,40,70,60,80,90};
	
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
	
	root1=mirror(root);
	inorder(root1);
	
	if(checkmirror(root,root1))
	{
		printf("BOTH TREES ARE MIRROR\n");
	}
	else
	{
		printf("NOT MIRROR\n");
	}
	
	return 0;
}
