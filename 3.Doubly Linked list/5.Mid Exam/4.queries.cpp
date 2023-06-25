#include <iostream>
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
     cout<<"L -> ";
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
    cout<<"R -> " ;
    while (tmp!=NULL)
    {
        cout <<tmp->val<<" ";
        tmp = tmp->Previous;
    }
    cout<<endl;
}
void Inset_at_head(Node* &head,Node* &tail,int val)
{
   
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->Previous=newNode;
    head=newNode;

}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->Previous=tail;
    tail=newNode;
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
   
}
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
    
}
int main() {
    Node* head = NULL;
    Node* tail = NULL;
    int Q;
    cin >> Q;
    while (Q--) {
        int X, V;
        cin >> X >> V;
        if(X>size(head)){
            cout<<"Invalid"<<endl;
        }
        else if (X == 0) {
            Inset_at_head(head, tail, V);
            Print_normal(head);
            print_reverse(tail);
        } 
        else if (X < size(head)) {
            
            insert_at_any_position(head,X,V);
            Print_normal(head);
            print_reverse(tail);      
        }
       else
       {
         insert_at_tail(head, tail, V);
         Print_normal(head);
         print_reverse(tail);
       }
    }
    return 0;
}