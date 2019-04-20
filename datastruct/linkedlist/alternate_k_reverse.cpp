//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct listNode{
	int val;
	listNode* next;
};

void print(listNode* head){
	listNode* cur = head;
	while(cur){
		cout<<cur->val<<" ";
		cur = cur->next;
	}
	return;
}

listNode* alt_k_reverse(listNode* head,int k){
	if(!head) return NULL;
	int x = 0,y=0;
	listNode* cur = head;
	listNode* nhead = NULL;
	listNode* pre = NULL;
	
	while(cur){
		listNode* curr = cur;
		x = 0;
		while(curr){
			x++;
			if(x==k) break;
			curr = curr->next;
		}
		if(x==k && !y){
			y=1;
			listNode* next = curr->next;
			curr->next = NULL;
			curr = cur;
			listNode* prev=NULL;
			listNode* nnext = NULL;
			
			while(curr){
				nnext = curr->next;
				curr->next = prev;
				prev = curr;
				curr = nnext;
			}
			if(!nhead){
				nhead = prev;
			}
			
			if(pre){
				pre->next = prev;
			}
			pre = cur;
			cur->next = next;
			cur = cur->next;
		}
		else if(y){
			if(curr) cur = curr->next,pre = curr;
			else break;
			y=0;
		}
		else{
			break;
		}
	}
	
	return nhead;	
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	cin>>k;
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	listNode *head1=NULL;
	listNode *cur;
	
	for(int i=0;i<10;i++){
		listNode *newnode = new listNode();
			newnode->val = arr[i];
		if(!head1){ 
			head1 = newnode;
			cur = head1;
		}
		else{
			cur->next = newnode;
			cur = cur->next;
		}
	}
	
	print(head1);
	head1 = alt_k_reverse(head1,k);
	print(head1);
	
    return 0;
}

