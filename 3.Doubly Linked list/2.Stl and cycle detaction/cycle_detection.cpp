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
int main ()
{
    Node* head = new Node (10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    // connection
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=a;

    
    Node* Slow = head;
    Node* First= head;
    bool flag=false;
    while (First!=NULL && First->next!=NULL )
    {
        Slow= Slow->next;
        First= First->next->next;
        if(First==Slow)
        {
            flag=true;
            break;
        }
    }
    if(flag)cout<<"Cycle detected...."<<endl;
    else cout<<"It's Not a Cycle It's a pain Line"<<endl;
    return 0;
}