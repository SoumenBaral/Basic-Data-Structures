#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*Previous;
        Node*next;
        
        Node(int val)
        {
            this->val=val;
            this->Previous=NULL;
            this->next=NULL;
        }
};
void Print_normal(Node*head)
{
    Node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->Previous;
    }
    cout<<endl;
}
void insert_at_any_position(Node* head,int pos,int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
       
    }
     newNode->next=tmp->next;
     tmp->next->Previous=newNode;
     tmp->next=newNode;
     newNode->Previous=tmp;
        
        // cout<<tmp->val;
}
int size(Node*head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
    
    
}
int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail=c;
    
    //connection
    head->next=a;
    a->Previous=head;
    a->next=b;
    b->Previous =a;
    b->next=c;
    c->Previous=b;

    int pos,val;
    cin>>pos>>val;
    if(pos>=size(head))
    {
        cout<<"Invalid Index"<<endl;
    }
    else{
        insert_at_any_position(head,pos,val);
    }
    
    Print_normal(head);
    print_reverse(tail);
    // cout<<size(head)<<endl;
    // cout<<b->Previous->val<<endl;

    return 0;
}