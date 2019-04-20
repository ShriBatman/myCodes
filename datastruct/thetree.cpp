//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

class Tree{
	public:
		int data;
		Tree * left;
		Tree * right;
	
		Tree(int x){
			data=x;
			left=NULL;
			right=NULL;
		}
};

class Work{
	public:
	Tree* insert(Tree* root,int x){
		if(root == NULL){
			return new Tree(x);
		}
		else{
			if(root->data > x){
				root->left = insert(root->left,x);
			}
			else{
				root->right = insert(root->right,x);
			}
		}
		
		return root;
	}
	
	
};

void inorder(Tree* root){
	if(root == NULL) return;
	
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
	
	return;
}

void preorder(Tree* root){
	if(root==NULL) return;
	
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
	
	return;
}

void postorder(Tree* root){
	if(root==NULL) return;
	
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
	return;
}

int height(Tree* root){
	if(root==NULL) return -1;
	
	int lh = height(root->left);
	int rh = height(root->right);
	
	if(lh>rh) return lh+1;
	else return rh+1;
}

void print(Tree* root,int x){
	if(root==NULL) return;
	if(x==0){
		cout<<root->data;
		return;
	}
	else{
		print(root->left,x-1);
		print(root->right,x-1);
	}
	return;
}

void printlevel(Tree* root,int level){
	
	for(int i=0;i<=level;i++){
		print(root,i);
	}
	
	return;
}

//inorder without recursion using stack
void the_inorder(Tree* root){
	stack<Tree*> s;
	int x=1;
	Tree* cur = root;
	Tree* ptr=NULL;
	while(x){
		if(cur){
			s.push(cur);
			cur = cur->left;
		}
		else{
			if(!s.empty()){
				ptr = s.top();
			s.pop();
			cout<<ptr->data;
			cur = ptr->right;
			}
			else x=0;
		}
	}
	
	return;	
}

int main(){
	long long int i,j,k,l;
	
	Work W;
	Tree* root = NULL;
	
	cin>>k;
	
	while(k){
		cin>>l;
		root = W.insert(root,l);
		k--;
	}
	
	inorder(root);
	cout<<"\n";
	preorder(root);
	cout<<"\n";
	postorder(root);
	cout<<"\n";
	cout<<height(root);
	printlevel(root,height(root));
	cout<<"\n";
	the_inorder(root);
	
    return 0;
}
