//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct node_tree{
	long long int data;
	struct node_tree* right;
	struct node_tree* left;
};

void topview(struct node_tree* root){
	if(root!=NULL){
		
	}
	return;
}

void inorder(struct node_tree* root){
	if(root != NULL){
	inorder(root->left);
	cout<<root->data<<"\n";
	inorder(root->right);
	}
	
	return;
}

int height(struct node_tree* root){
	
	if(root==NULL){
		return -1;
	}
	
	int l = height(root->left);
	int r = height(root->right);
	
	return max(l,r)+1;
	
}

void preorder(struct node_tree* root){
	if(root!=NULL){
		cout<<root->data<<"\n";
		preorder(root->left);
		preorder(root->right);
	}
	
	return;
}

void postorder(struct node_tree* root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<"\n";
	}
	
	return;
}

struct node_tree* newnode(long long int x){
	struct node_tree* tree = new struct node_tree();
	tree->data=x;
	tree->left=NULL;
	tree->right=NULL;
	
	return tree;
}

int main(){
	
	long long int i,j,k,l,m,n,r,t;
	
	//long long int arr[] = {1,2,3,4,5,6,7};
	
	//for(i=0;i<7;i++){
		struct node_tree* root = new struct node_tree();
		root = newnode(10);
		root->right=newnode(23);
		root->left=newnode(21);
		root->left->left=newnode(3);
		root->left->right=newnode(2112);
		root->right->left=newnode(45);
		root->right->right=newnode(384);
	//}
	
	inorder(root);
	cout<<"\n";
	preorder(root);
	cout<<"\n";
	postorder(root);
	k=height(root);
	cout<<k<<"\n";
	
    return 0;
}

