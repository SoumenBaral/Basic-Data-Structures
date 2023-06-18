#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

            Node(int val){
                this->val=val;
                this->next=NULL;
            }

};
void insert_at_tail(Node*&head,Node* &tail,int value){
    Node* newNode= new Node(value);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }

  
   tail->next=newNode;
   tail=newNode;

};
int size(Node* head)
{
    Node* tmp = head;
    int count =0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
void sorted(Node* head)
{
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val){
            swap(i->val,j->val);
            }

             
        }
    }
} 
void find_middle(Node*head)
{
    Node* tmp = head;
    int sz=size(head);
    cout<< sz<<endl;
    if(sz==1){
        cout<<tmp->val<<endl;
    }
    else if(sz==2)cout<<tmp->val<<" "<< tmp->next->val<<endl;

    else if(sz%2 !=0 ){
       for(int i=0; i<sz/2; i++)
       {
           tmp=tmp->next;
       }
       cout<<tmp->val<<endl;
    }
    else{
         for(int i=0; i<(sz/2)-1; i++)
       {
           tmp=tmp->next;
       }
       cout<<tmp->val<<" "<< tmp->next->val<<endl;
    }
}
int main ()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    sorted(head);
    
    find_middle(head);
    return 0;
}