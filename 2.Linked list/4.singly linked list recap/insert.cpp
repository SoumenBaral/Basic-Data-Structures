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

    cout<<"Enter the vale and position for insert"<<endl;
    int value,position;
    cin>>value>>position;
    
    if(position<=size(head))
    {
    insert_anyPosition_linked_list(head,value,position);
        Print_linked_list(head);
    }
    else{
        cout<<"Invalid Index"<<endl;
    }
   
    

    
    return 0;
}