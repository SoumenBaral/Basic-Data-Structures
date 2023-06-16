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
    int siz =size(head);
    cout<<endl<<siz<<endl;
    return 0;
}