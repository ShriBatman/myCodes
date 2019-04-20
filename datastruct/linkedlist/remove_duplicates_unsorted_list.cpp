//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct listNode{
	int val;
	listNode* next;
};

listNode* unsorted_remove(listNode* head){
	if(!head) return NULL;
	
	unordered_set<int> s;
	
	listNode *cur = head,*prev = NULL;
	
	while(cur){
		if(s.find(cur->val) != s.end()){
			prev->next = cur->next;
			free(cur);
		}
		else{
			s.insert(cur->val);
			prev = cur;
		}
		cur = prev->next;
	}
	
	return head;
}

void print(listNode* head){
	listNode* cur = head;
	while(cur){
		cout<<cur->val<<" ";
		cur = cur->next;
	}
	return;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	int arr[] = {6,1,10,2,3,2,4,6,8,10,2,7,1,7,1};
	
	listNode *head1=NULL;
	listNode* cur;
	
	for(int i=0;i<15;i++){
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
	cout<<"\n";
	
 	listNode * head = unsorted_remove(head1);
 	print(head);
 	
    return 0;
}

