#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
            Node(int val)
            {
                this->val=val;
                this->next=NULL;
                this->prev=NULL;
            }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
        if(tmp == NULL)
        {
            head = newNode;
            tail = newNode;
                return;
        }
        tail->next=newNode;
        newNode->prev = tail;
        tail = newNode;
}
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return; 
    }
    head->prev=newNode;
    newNode->next= head;
    head = newNode;

}
void print(Node* head)
{
    Node* tmp = head;
        while(tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
}
void reverse(Node* tail)
{
    Node* tmp = tail;
        while (tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->prev;
        }
        cout<<endl;
        
}
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp!=NULL)
    {
        count++;
        tmp= tmp->next;
    }
    return count;
}
void insert_at_position(Node* head,int pos,int val)
{
  
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=0;i<pos-1;i++)
    {
        tmp=tmp->next;
       
    }
     newNode->next=tmp->next;
     tmp->next->prev=newNode;
     tmp->next=newNode;
     newNode->prev=tmp;
        
        // cout<<tmp->val;
}

int main ()
{
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin>>q;
    while (q--)
    {
       int pos,val;
       cin>>pos>>val;
       if(size(head)<pos)cout<<"Invalid Index"<<endl;
       else if(pos==0)insert_at_head(head,tail,val);
       else if (size(head)==pos)insert_at_tail(head,tail,val);
      else insert_at_position(head,pos,val);
       
        print(head);
        reverse(tail);


    }
    
 

   


    return 0;
}