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
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
    
    
}
void insert_tail(Node* head,Node*&tail,int v)
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
void same (Node*h1 ,Node*h2)
{
 int sz= size(h1);
    // cout<<sz<<endl;
    int sz2= size(h2);
    // cout<<sz<<endl;
    if(sz!=sz2)
    {
        cout<<"NO"<<endl;
    }
    else{
    int flag= 0;
    while(h1->next!=NULL&& h2->next!=NULL)
    {
        if(h1->val!=h2->val) { 
            flag=1;
            break;
        };
    }
    if(flag==0)cout<<"YES";
    else cout<< "NO"; 
    }
}
int main ()
{

    Node* head1 = NULL;
    Node* tail1 = NULL;
    int v;
    while(true)
    {
        if(v==-1)break;
        insert_tail(head1,tail1,v);
    }
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int v;
    while(true)
    {
        if(v==-1)break;
        insert_tail(head1,tail1,v);
    }
   
    return 0;
}