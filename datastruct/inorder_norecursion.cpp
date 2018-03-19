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

void inorder(Tree* root){
	stack<Tree*> s;
	
	Tree* cur = root;
	
	while(1){
		if(cur){
			s.push(cur);
			cur=cur->left;
		}
		else{
			if(!s.empty()){
				cur = s.top();
				s.pop();
				cout<<cur->data<<" ";
				cur =cur->right;
			}
			else{
				return;
			}
		}
	}
}

void nostack(Tree * root){
	Tree* cur = root;
	
	while(cur){
		if(cur->left==NULL){
			cout<<cur->data<<" ";
			cur=cur->right;
		}
		else{
			Tree* rightmost = cur->left;
			while(rightmost){
				rightmost=rightmost->right;
			}
			rightmost->right=cur;
			cur=cur->left;
		}
	}
	
	return;
}

int main(){

	long long int i,j,k,l,m,n,r,t;
	
	Solution in;
	Tree* root=NULL;
	cin>>t;
	
	while(t>0){
		cin>>k;
		root = in.insert(root,k);
		t--;
	}
	
	inorder(root);
	cout<<"\n";
	nostack(root);
	
    return 0;
}

