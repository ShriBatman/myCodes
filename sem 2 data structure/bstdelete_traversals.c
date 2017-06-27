#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

int height(struct node*root)
{
	if(root==NULL)
	return 0;
	
	int lheight=height(root->left);
	int rheight=height(root->right);
	
	if(lheight>=rheight)
	return(lheight+1);
	else
	return (rheight+1);
}


void printlevelorder(struct node* root,int i)
{
	if(root== NULL)
	return;
	
	if(i==1)
	printf("%d\n",root->data);
	else if(i>1)
	{
		printlevelorder(root->left,i-1);
		printlevelorder(root->right,i-1);
	}
}

void level(struct node* root)
{
	int h=height(root);
	int i;
	
	for(i=1;i<=h;i++)
	{
		printlevelorder(root,i);
	}
}

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

struct node* inordersuc(struct node* root)
{
	struct node *ptr=root;
	
	while(ptr->left!=NULL)
	{
		ptr=ptr->left;
	}
	
	return ptr;
}

struct node* deletion(struct node* root,int y)
{
	if(root==NULL)
	{
		return root;
	}
	else
	{
		if(y<root->data)
		{
			root->left=deletion(root->left,y);
		}
		else if(y>root->data)
		{
			root->right=deletion(root->right,y);
		}
		else if(y==root->data)
		{
			if(root->left==NULL && root->right==NULL)
			{
				free(root);
				return NULL;
			}
			else if(root->right==NULL)
			{
				root->data=root->left->data;
				free(root->left);
				root->left=NULL;
				return root;
			}
			else if(root->left==NULL)
			{
				root->data=root->right->data;
				free(root->right);
				root->right=NULL;
				return root;
			}
			else
			{
				struct node* temp=inordersuc(root->right);
				
				root->data=temp->data;
				
				root->right=deletion(root->right,temp->data);
			}
		}
	}
	
	return root;
}

void inorder(struct node* r)
{
	if(r!=NULL)
	{
	inorder(r->left);
	printf("%d\n",r->data);
	inorder(r->right);
	}
}

void preorder(struct node* pt)
{
	if(pt!=NULL)
	{
	printf("%d\n",pt->data);
	preorder(pt->left);
	preorder(pt->right);
	}
}
void post(struct node* p)
{
	if(p!=NULL)
	{
	post(p->left);
	post(p->right);
	printf("%d\n",p->data);
	}
}


int main()
{
	struct node* root=NULL;
	struct node* start=NULL;
	int arr[]={50,30,20,40,70,60,80,90};
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
	level(root);
	
	int x;
	scanf("%d",&x);
	root=deletion(root,x);
	
	inorder(root);
	
	return 0;
}
