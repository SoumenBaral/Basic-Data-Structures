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
void reverse(Node* head,Node* tail)
{
    Node* i = head;
    Node* j = tail;
    while(i!=j && i->next!=j )
    {
       swap(i->val,j->val);
       i=i->next;
       j=j->Previous;
    }
}
int main ()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    Node* tail=d;
    head->next=a;
    a->Previous=head;
    a->next=b;
    b->Previous =a;
    b->next=c;
    c->Previous=b;
    c->next=d;
    d->Previous=c;
    reverse(head,tail);
    Print_normal(head);
    // print_reverse(tail);
    // cout<<b->Previous->val<<endl;

    return 0;
}