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
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

Node* insert_tail(Node* &head,Node*&tail,int v)
{
    
     Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return head; 
    }
    tail->next=newNode;
    tail=newNode;
    return head;
}
void sorts(Node* head)
{
    for(Node* i=head; i->next!=NULL; i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    
    }
}
Node* deleteDuplicates(Node* head) {
        Node* tmp = head;
        if(head==NULL)return head;
        
        while(tmp->next!=NULL)
        {
            if(tmp->val == tmp->next->val)
            {
                Node* deleted = tmp->next;
                tmp->next = tmp->next->next;
                delete deleted;
            }
            if(tmp->next==NULL)break;
            else if(tmp->val !=tmp->next->val)
            {
                tmp=tmp->next;
            }
        }
        return head;
    }
int main ()
{
   Node* head= NULL;
    Node* tail= NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head,tail,val);
    }
//    Print_linked_list(head);
   sorts(head);
    deleteDuplicates(head);
   Print_linked_list(head);

    return 0;
}