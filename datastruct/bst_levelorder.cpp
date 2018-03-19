//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

class Tree{
	public:
		int data;
		Tree* right;
		Tree* left;
		Tree(int x){
			data = x;
			right=NULL;
			left=NULL;
		}
};

class Solution{
	public:
		Tree* insert(Tree* root, int x){
			if(root==NULL) return new Tree(x);
			else{
				Tree* cur;
				if(x<=root->data){
					cur = insert(root->left,x);
					root->left=cur;
				}
				else{
					cur=insert(root->right,x);
					root->right=cur;
				}
				return root;
			}
		}
		
};

int height(Tree* root){
	if(root==NULL) return -1;
	
	int l = height(root->left);
	int r =height(root->right);
	
	return max(l,r)+1;
}

void printlevel(Tree* root,int level){
	if(root==NULL) return;
	if(level==0)
	cout<<root->data<<" ";
	else{
		printlevel(root->left,level-1);
		printlevel(root->right,level-1);
	}
	
	return;
}

void levelorder(Tree* root){
	int h = height(root);
	
	for(int i=0;i<=h;i++){
		printlevel(root,i);
		cout<<"\n";
	}
	
	return ;
}

void level(Tree* root){
	queue<Tree*> tree;
	
	if(root){
		tree.push(root);
	}
	while(!tree.empty()){
		Tree* node=tree.front();
		tree.pop();
		cout<<node->data<<" ";
		
		if(node->left){
			tree.push(node->left);
		}
		if(node->right){
			tree.push(node->right);
		}
	}
	
	return;
}

void lorder(Tree* root){
	deque<Tree*> detree;
	
	if(root){
		detree.push_back(root);
	}
	
	while(!detree.empty()){
		Tree* denode = detree.front();
		detree.pop_front();
		cout<<denode->data<<" ";
		
		if(denode->left){
			detree.push_back(denode->left);
		}
		if(denode->right){
			detree.push_back(denode->right);
		}
	}
	
	return;
}


int main()
{
	long long int i,j,k,l,m,n,r,t;
	
	Solution in;
	Tree* root=NULL;
	cin>>t;
	
	while(t>0){
		cin>>k;
		root = in.insert(root,k);
		t--;
	}
	
	levelorder(root);
	cout<<"\n";
	level(root);
	cout<<"\n";
	lorder(root);
    return 0;
}

