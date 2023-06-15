#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;

        Node(int val)
        {
            this->val=val;
            this->next=NULL;
        }
};
void Print_linked_list(Node* head)
{
      
    Node* tmp = head;
    cout<<endl;
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void insert_anyPosition_linked_list(Node* head,int val,int p)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=0; i<p-1; i++)
    {
        tmp=tmp->next;
    //     if(tmp == NULL)
    // {
    //     cout<<"invalid Position"<<endl; //option 1 is here to handle erro 2 is running;
    //     return;
    // }
    }
    
    newNode->next=tmp->next;
    tmp->next=newNode;

}
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
void insert_head(Node* &head,int value)
{
    Node* newNode= new Node(value);
    newNode->next=head;
    head=newNode;
    cout<<"Head Inserted"<<endl;

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
    Print_linked_list(head);

    cout<<"Enter the vale that you want to  insert in head "<<endl;
    int value;
    cin>>value;
    
   insert_head(head,value);
   Print_linked_list(head);
    

    
    return 0;
}