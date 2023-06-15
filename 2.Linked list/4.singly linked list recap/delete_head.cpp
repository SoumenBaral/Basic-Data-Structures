#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*next;
        
        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void Print_linked_list(Node* head)
{
      
    Node* tmp = head;
    cout<<endl;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void delete_from_any_position(Node*head,int pos)
{
    Node* tmp=head;
    for(int i=0; i<pos-1; i++)
    {
        tmp=tmp->next;
    }
    Node* deletedItm= tmp->next;
    tmp->next=tmp->next->next;
    delete deletedItm;
}
int size(Node* head)
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
void delete_head(Node*&head)
{
    Node* deleteHead=head;
    head=head->next;
    delete deleteHead; 
}
int main ()
{

    Node* head= new Node(10);
    Node* a = new Node(20);
    Node* b= new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    //------------------------------>
    Print_linked_list(head);
    int position;
    cout<<endl<<"Enter a position"<<endl;
    cin>>position;
    if(position>=size(head))
    {
        cout<<"Invalid Index"<<endl;
        return 0;
    }
    else if(position==0)
    {
        delete_head(head);
        Print_linked_list(head);
    }
    else{
    delete_from_any_position(head,position);
    Print_linked_list(head);
    }
    return 0;
}