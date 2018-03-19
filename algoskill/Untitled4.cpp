#include<bits/stdc++.h>

using namespace std;

struct node{
    int strength;
    vector<int> roll;
    vector<string> name;
    struct node* next;
};

struct node* newnode(){
    int i,j,k,l;
    struct node* topnode = new struct node();
            topnode->next = NULL;
            cin>>k;
            topnode->strength = k;
            vector<string> n;
            vector<int> roll_no;
            string p;
            int m;
            for(j=0;j<k;j++){
                cin>>m;
                roll_no.push_back(m);
            }
            topnode->roll = roll_no;

            for(j=0;j<k;j++){
                cin>>p;
                n.push_back(p);
            }
            topnode->name = n;

            return topnode;
}

struct node* new_insert(struct node* head,int pos){
    struct node* mynode = newnode();

    struct node* temp = head;

    if(pos==0){
        do{
             temp = temp->next;
        }
		while(temp->next!=head);
		
        temp->next = mynode;
        mynode->next = head;
        head = mynode;
    }
    else{
    for(int i=1;i<pos;i++){
        temp = temp->next;
    }

    mynode->next = temp->next;
    temp->next = mynode;
	}

    return head;
}

struct node* del(struct node* head,int pos){

    struct node* temp = head;
    struct node* temp2;
    if(pos==1){
        head = head->next;
        temp2 = head;
        while(temp2->next!=temp){
            temp2 = temp2->next;
        }
        temp2->next = head;
        free(temp);
    }
    else{

    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }

    temp2 = temp->next;
    temp->next = temp2->next;

    free(temp2);
    }

    return head;
}


int main(){
    int i,j,k,l,m,n;
    //struct node circle ;//= new struct node();
    struct node* head=NULL;
    struct node* cur=NULL;
    for(i=0;i<5;i++){

            struct node* mynode = newnode();
            if(head==NULL){
                head = mynode;
                cur = mynode;
            }
            else{
                cur->next = mynode;
                cur = cur->next;
            }
    }

    cur->next = head;

    struct node* temp = head;

    do{
        cout<<temp->strength<<"\n";

        for(j=0;j<temp->strength;j++){
            cout<<temp->roll[j]<<" "<<temp->name[j]<<"\n";
        }
        temp = temp->next;
    }
    while(temp!=head);


//insert new node
    cin>>l;
    head = new_insert(head,l);

    temp = head;

    do{
        cout<<temp->strength<<"\n";

        for(j=0;j<temp->strength;j++){
            cout<<temp->roll[j]<<" "<<temp->name[j]<<"\n";
        }
        temp = temp->next;
    }
    while(temp!=head);

//delete a node
int kill;
cin>>kill;
    head = del(head,kill);
    temp =head;

        do{
        cout<<temp->strength<<"\n";

        for(j=0;j<temp->strength;j++){
            cout<<temp->roll[j]<<" "<<temp->name[j]<<"\n";
        }
        temp = temp->next;
    }
    while(temp!=head);

    return 0;
}
