//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct Tree{
	int val;
	Tree* left = NULL;
	Tree* right = NULL;
};

void inorder(Tree* root){
	if(!root) return;
	
	inorder(root->left);
	cout<<root->val<<"\n";
	inorder(root->right);
	return;
}

Tree* sortedToBST(vector<int> a, int l, int r){
	if(r<=0 || l>r) return NULL;
	
	int mid = (l+r)/2;
	Tree* root = new Tree();
	root->val = a[mid];
	root->left = sortedToBST(a,l,mid-1);
	root->right = sortedToBST(a,mid+1,r);
	
	return root;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>n;
	
	vector<int> a; // sorted
	for(int i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	}
	
	Tree *root = sortedToBST(a,0,n-1);
	inorder(root);
	
    return 0;
}

