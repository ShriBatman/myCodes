#include<bits/stdc++.h>

using namespace std;

struct node{
    int strength;
    vector<int> roll;
    vector<string> name;
    node* next;
    node* prev;
};

node* newnode(){
    int i,j,k,l;
    node* topnode = new node();
            topnode->next = NULL;
            topnode->prev = NULL;
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

node* new_insert(node* head,int pos){
    node* mynode = newnode();
    node* temp = head;

    if(pos==0){
            head = mynode;
        mynode->next = temp;
        temp->prev = mynode;
    }
    else{
    for(int i=1;i<pos;i++){
        temp = temp->next;
    }


    if(temp->next == NULL){
        mynode->prev = temp;
        temp->next = mynode;
    }
    else{
    mynode->next = temp->next;
    temp->next->prev  = mynode;
    mynode->prev = temp;
    temp->next = mynode;
    }
    }

    return head;
}

node* del(node* head,int pos){

    node* temp = head;
    node* temp2;
    if(pos==1){
        head = head->next;
        head->prev = NULL;
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
    node* head=NULL;
    node* cur=NULL;
    for(i=0;i<4;i++){

            node* mynode = newnode();
            if(head==NULL){
                head = mynode;
                cur = mynode;
            }
            else{
                cur->next = mynode;
                mynode->prev = cur;
                cur = cur->next;
            }
    }


    node* temp = head;

    while(temp!=NULL){
        cout<<temp->strength<<"\n";

        for(j=0;j<temp->strength;j++){
            cout<<temp->roll[j]<<" "<<temp->name[j]<<"\n";
        }
        temp = temp->next;
    }



//insert new node
    cin>>l;
    head = new_insert(head,l);

    temp = head;

    while(temp!=NULL){
        cout<<temp->strength<<"\n";

        for(j=0;j<temp->strength;j++){
            cout<<temp->roll[j]<<" "<<temp->name[j]<<"\n";
        }
        temp = temp->next;
    }


//delete a node
int kill;
cin>>kill;
    head = del(head,kill);
    temp =head;

        while(temp!=NULL){
        cout<<temp->strength<<"\n";

        for(j=0;j<temp->strength;j++){
            cout<<temp->roll[j]<<" "<<temp->name[j]<<"\n";
        }
        temp = temp->next;
    }
    

    return 0;
}
