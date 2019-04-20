//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node* next;
};

void printreverse(node* head1){
	node* cur = head1;
	int count = 0;
	while(cur){
		count++;
		cur = cur->next;
	}
	
	int j=0;
	cur = head1;
	while(cur){
		
		for(int i=0;i<2*(count-j);i++) printf(" ");
		
		printf("%d\r",cur->val);
		cur = cur->next;
		j++;
	}
	
	return;
}

bool sublist(node* head1, node* head2){
	if(!head1 || !head2) return false;
	
	node* one = head1;
	node* two = head2;
	
	while(one){
		if(one->val == two->val){
			one = one->next;
			two = two->next;
		}
		else{
			if(two == head2) one = one->next;
			else two = head2;
		}
		
		if(!two) return true;
	}
	
	return false;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	node *head1 = NULL;
	node *head2 = NULL;
	node *cur = NULL;
	
	int arr[]={1,2,3,1,2,2,2,3,1,2,3,4,5,1,3};
	int ar[] = {1,2,3,4,5};
	
	for(int i=0;i<15;i++){
		node* newnode = new node();
		newnode->val  = arr[i];
		if(!head1){
			head1 = newnode;
			cur = head1;
		}
		else{
			cur->next = newnode;
			cur = cur->next;
		}
	}
	
	for(int i=0;i<5;i++){
		node* newnode = new node();
		newnode->val  = ar[i];
		if(!head2){
			head2 = newnode;
			cur = head2;
		}
		else{
			cur->next = newnode;
			cur = cur->next;
		}
	}
	
	
	if(sublist(head1,head2)) cout<<"true\n";
	else cout<<"false\n";
	print(head1);
    return 0;
}

