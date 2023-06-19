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
void print(Node*head)
{
    Node* tmp = head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_recursion(Node* head)
{
    //base case;
    if(head==NULL)return;
    cout<<head->val<<" ";
    print_recursion(head->next);
    
}
void print_reverse(Node* head)
{
    //base case;
    if(head==NULL)return;
    
    print_reverse(head->next);
    cout<<head->val<<" ";
    
}
void reverse(Node* &head,Node*cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;

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

print(head);

reverse(head,head);
print(head);
    return 0;
}