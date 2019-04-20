//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct listNode{
	int val;
	listNode* next;
};

listNode* merge(listNode* head1, listNode* head2){
	if(!head1 && !head2) return NULL;
	
	listNode *cur1 = head1,*cur2 = head2;
	listNode *next = NULL,*head = NULL;
	
	while(cur1 && cur2){
		if(cur1->val <= cur2->val){
			next = cur1->next;
			cur1->next = head;
			head = cur1;
			cur1 = next;
		}
		else{
			next = cur2->next;
			cur2->next = head;
			head = cur2;
			cur2 = next;
		}
	}
	
	while(cur1){
		next = cur1->next;
		cur1->next = head;
		head = cur1;
		cur1 = next;
	}
	
	while(cur2){
		next = cur2->next;
		cur2->next = head;
		head = cur2;
		cur2 = next;
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
	int arr[] = {1,3,5,7,9};
	int ar[] = {2,4,6,8,10};
	
	listNode *head1=NULL,*head2=NULL;
	listNode* cur;
	
	for(int i=0;i<5;i++){
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
	
	cur = NULL;
	for(int i=0;i<5;i++){
		listNode *newnode = new listNode();
			newnode->val = ar[i];
		if(!head2){ 
			head2 = newnode;
			cur = head2;
		}
		else{
			cur->next = newnode;
			cur = cur->next;
		}
	}
 	
 	print(head1);cout<<"\n";
 	print(head2);cout<<"\n";
 	listNode * head = merge(head1,head2);
 	print(head);
 	
    return 0;
}

