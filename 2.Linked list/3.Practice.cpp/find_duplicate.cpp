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

    }

   tail->next=newNode;
   tail=newNode;

};
void print(Node*head){
    Node*tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
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
void find_duplicate(Node* head)
{
    bool flag=false;
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val==j->val){
                flag=true;
                break;
            }

            // cout<<i->val<<" "<<j->val<<endl;   
        }
        // cout<<endl;
    }
   

    if(flag)cout<<"Yes Found some duplicate value"<<endl;
    else cout<<"NO All the value is fresh"<<endl;
}
int main ()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    cout<<"Insert Your value :";
    while(true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    print(head);
    find_duplicate(head);
    return 0;
}