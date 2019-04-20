//i am vengence i am the night i am Batman
//ios_base::sync_with_stdio(false);cin.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

struct listnode{
	int val;
	listnode* next;
};

listnode* swap(listnode* head, int x, int y){
	if(!head) return head;
	
	listnode *prevy=NULL,*cury=head;
	listnode *prevx=NULL,*curx=head;
	
	while(curx && curx->val!=x){
		prevx = curx;
		curx = curx->next;
	}
	
	while(cury && cury->val!=y){
		prevy = cury;
		cury = cury->next;
	}
	
	if(!curx || !cury ) return head;
	
	if(!prevy){
		head = curx;
	}
	else prevy->next = curx;
	
	
	if(!prevx) head = cury;
	else prevx->next = cury;
	
	listnode* temp = curx->next;
	curx->next = cury->next;
	cury->next = temp;
	
	return head;
	
}

void print(listnode* head){
	listnode* cur = head;
	while(cur){
		cout<<cur->val<<" ";
		cur = cur->next;
	}
	return;
}

int main(){
	long long int i,j,k,l,m,n,r,t;
	
	int arr[] = {2,41,123,12,54,465,34,232,234,543};
	listnode* head = NULL;
	listnode* cur = NULL;
	
	for(i=0;i<10;i++){
		if(!head){
			head = new listnode();
			head->val = arr[i];
			cur = head;
		}
		else{
			listnode* newnode = new listnode();
			newnode->val = arr[i];
			cur->next = newnode;
			cur = cur->next;
		}
	}
	
	print(head);
	//elements to be swapped.
	cin>>l>>r;
	head = swap(head,l,r);
	print(head);
	
    return 0;
}

