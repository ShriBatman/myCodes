#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

struct node* newnode(int data)
{
	struct node* pt=(struct node*)malloc(sizeof(struct node));
	pt->data=data;
	pt->left=NULL;
	pt->right=NULL;
	
	return(pt);
}

struct node* tree(struct node* root,int a)
{
	if(root==NULL)
	{
		return newnode(a);
	}
	else
	{
		if(a<root->data)
		{
			if(root->left==NULL)
			{
				root->left=newnode(a);
			}
			else
			{
		      root->left=tree(root->left,a);
			}
		}
		if(a>root->data)
		{
			if(root->right==NULL)
			{
				root->right=newnode(a);
			}
			else
			{
		      root->right=tree(root->right,a);
			}
		}
	}
	
	return root;
}

void inorder(struct node* ptr)
{
	if(ptr==NULL)
	return;
	
	inorder(ptr->left);
	printf("%d\n",ptr->data);
	inorder(ptr->right);
}

struct node* search(struct node* root,int k)
{
	if(root==NULL || root->data==k)
	return root;
	else if(root->data>k)
	{
		search(root->left,k);
	}
	else if(root->data<k)
	{
		search(root->right,k);
	}
	
}

int main()
{
	struct node* root=NULL;
	struct node* start=NULL;
	int arr[]={50,20,30,40,70,60,80};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	int i;
	
	for(i=0;i<size;i++)
	{
		if(i==0)
		{
		root=tree(root,arr[i]);
		start=root;
		}
		else
		{
			root=tree(root,arr[i]);
		}
	}
	root=start;
	
	inorder(root);
	int k;
	scanf("%d",&k);
	
	printf("%d\n",search(root,k)->data);
	
	return 0;
	
}
