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
void Insert_head(Node*&head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return; 
    }
    newNode->next=head;
    head=newNode;
   
 
   
   

}
void insert_tail(Node* &head,Node*&tail,int v)
{
    
     Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return; 
    }
    tail->next=newNode;
    tail=newNode;
}
    
int main ()
{
    Node*head=NULL;
    Node*tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int pos, val;
        cin>>pos>>val;
       
       if(pos==0)Insert_head(head,tail,val);
        else if(pos==1) insert_tail(head,tail,val);

       cout<<head->val<<" "<<tail->val<<endl;
    }
    
    return 0;
}