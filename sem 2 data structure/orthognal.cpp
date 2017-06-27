#include<bits/stdc++.h>
using namespace std;
typedef struct node Node;
struct node
{
    int d;
    Node* next;
    Node* down;
}*start,*curr,*ptr,*p;
Node* new_node(int a)
{
    Node* q = (Node*) malloc(sizeof(Node));
    q->next=NULL;
    q->down=NULL;
    q->d=a;
}
int main()
{
    int r,c,count=0; cin>>r>>c;
    int i,j;
    for(i=0;i<r-1;i++)
    {
        if(start==NULL)
        {
            start=ptr=new_node(1);
            curr=start;
            curr->down=new_node(2);
            curr=curr->down;
            count++;
            for(j=0;j<c-1;j++)
            {
                ptr->next=new_node(3);
                curr->next=new_node(4);
                curr=curr->next;
                ptr=ptr->next;
                ptr->down=curr;
            }
        }
        else
        {
            curr=start;
            for(i=0;i<count;i++)
            {
                curr=curr->down;
            }
            ptr=curr;
            curr->down=new_node(5);
            curr=curr->down;
            for(j=0;j<c;j++)
            {
                curr->next=new_node(6);
                ptr->down=curr;
                curr=curr->next;
                ptr=ptr->next;
            }
            count++;
        }
    }
    curr=start;
    while(curr!=NULL)
    {
        ptr=curr->down;
        cout<<curr->d<<" ";
        while(ptr!=NULL)
        {
            cout<<ptr->d<<" ";
            ptr=ptr->down;
        }
        cout<<endl;
        curr=curr->next;
    }
}
