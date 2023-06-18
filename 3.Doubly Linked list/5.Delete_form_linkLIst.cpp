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

void delete_from_any_position_linked_list(Node* head,int pos)
{
   Node* tmp = head;
   for(int i=0; i<pos-1; i++)
   {
       tmp=tmp->next;
   }
   Node* deletedNode = tmp->next;
   tmp->next=tmp->next->next;
   tmp->next->Previous=tmp;
   delete deletedNode;

    
}
void delete_from_head(Node*&head,Node* &tail)
{
    Node* deletedNode = head;
    head=head->next;
    if(head==NULL)
    {
        tail==NULL;
    }
    head->Previous=NULL;
}
void delete_from_tail(Node*&tail)
{
    Node* deletedNode =tail;
    tail=tail->Previous;
    tail->next=NULL;
    delete deletedNode;

}
int main ()
{
    // Node* head = NULL;
    // Node* tail = NULL;
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

    int pos;
    cin>>pos;
    if(pos>=size(head))
    {
        cout<<"Invalid Position"<<endl;
    }
    else if(pos==0)
    {
        delete_from_head(head,tail);

    }
   else if(pos<size(head))
   {
    delete_from_any_position_linked_list(head,pos);
   }
   else{
    delete_from_tail(tail);
   }

   

    Print_normal(head);
    print_reverse(tail);
   

    return 0;
}