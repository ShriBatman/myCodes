//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct node{
	int val;
	node* next;
};

node* insertionsort(node* head){
	node* sort = NULL;
	node* scur = NULL;
	node* cur = head;
	node* next;
	
	while(cur){
		next = cur->next;
		if(!sort){
			cur->next = NULL;
			sort = cur;
			//scur = sort;
			cur = next;
		}
		else{
			scur = sort;
			node* prev = NULL;
			while(scur){
				if(cur->val > scur->val){
					prev = scur;
					scur = scur->next;
				}
				else{
					if(prev){
						prev->next = cur;
					}
					else{
						sort = cur;
					}
					cur->next = scur;
					cur = next;
					break;
				}
			}
			if(!scur){
				prev->next = cur;
				cur->next = NULL;
				cur = next;
			}
		}
	}
	
	return sort;
}

void print(node* head){
	node* cur = head;
	while(cur){
		cout<<cur->val<<" ";
		cur = cur->next;
	}
	return;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	int arr[] = {3,6,2,12,345,14,221,46,3245,11};
	
	node* head = NULL;
	node* cur = head;
	
	for(i=0;i<10;i++){
		node* newnode = new node();
		newnode->val = arr[i];
		
		if(!head){
			head = newnode;
			cur = head;
		}
		else{
			cur->next = newnode;
			cur = cur->next;
		}
	}
	
	head = insertionsort(head);
	print(head);
    return 0;
}

