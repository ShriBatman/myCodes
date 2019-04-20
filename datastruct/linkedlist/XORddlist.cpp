//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct DLList{
	int val;
	DLList* nptr;
};

DLList* XOR(DLList* a, DLList* b){
	return (DLList*)((uintptr_t)a ^ (uintptr_t)b );
}

void print(DLList* head){
	if(!head) return;
	
	DLList *cur,*prev,*next;
	cur = head;
	prev = NULL;
	
	while(cur){
		cout<<cur->val<<"\n";
		next = XOR(prev,cur->nptr);
		prev = cur;
		cur = next;
	}
	return;
}


DLList* insert(DLList* head , int x){
	DLList* newnode = new DLList();
	newnode->val = x;
	
	newnode->nptr = XOR(head,NULL);
	
	if(head) head->nptr = XOR(XOR(head->nptr,NULL),newnode);
	head = newnode;
	
	return head;
}



int main(){
	long long int i,j,k,l,m,n,r,t;
	
	cin>>n;
	vector<int> a;
	
	for(i=0;i<n;i++){
		cin>>l;
		a.push_back(l);
	} 
	
	DLList* head = NULL;
	
	while(n){
		n--;
		head = insert(head,a[n]);
	}
	
	print(head);
	
    return 0;
}

