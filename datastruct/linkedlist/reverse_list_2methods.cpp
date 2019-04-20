//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct listNode{
	int val;
	listNode* next;
};

listNode* reverse_2ptr(listNode* head){
	if(!head) return NULL;
	
	listNode* cur = head;
	listNode* next = NULL;
	while(cur->next){
		next = cur->next;
		cur->next = next->next;
		next->next = head;
		head = next;
	}
	
	return head;
}

listNode* reverse_2ptr_2(listNode* head){
	if(!head) return NULL;
	
	listNode* cur = head;
	listNode* prev = NULL;
	while(cur){
		cur = (listNode*)((uintptr_t)(prev) ^ (uintptr_t)(cur) ^ (uintptr_t)(cur->next) ^ (uintptr_t)(cur->next=prev) ^ (uintptr_t)(prev=cur));
	}
	head = prev;
	return head;
}

listNode* reverse_3ptr(listNode* head){
	if(!head) return head;
	
	listNode* cur = head;
	listNode* prev = NULL;
	listNode* next = NULL;
	
	while(cur){
		next = cur->next;
		cur->next = prev;
		prev = cur;
		cur = next;
	}
	
	head = prev;
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
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	listNode *head1=NULL;
	listNode* cur;
	
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
	cout<<"\n";
	
 	head1 = reverse_3ptr(head1);
 	print(head1);
 	cout<<"\n";
 	head1 = reverse_2ptr(head1);
 	print(head1);
 	cout<<"\n";
 	head1 = reverse_2ptr_2(head1);
 	print(head1);
 	
    return 0;
}

