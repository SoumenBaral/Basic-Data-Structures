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
 void Insert_tail(Node*&head,Node*&tail,int value)
 {
    Node* newNode = new Node(value);
    if(head==NULL)
    {
        head =newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
 }
 void Print_linked_list(Node*head)
 {
    Node* tmp= head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
 }
 int main ()
 {
     Node* head= NULL;
     Node*tail =NULL;
     int value;
     cout<<"Enter a Value That you Want to add:";
     while (true)
     {
        cin>>value;
        if(value==-1)break;
        Insert_tail(head,tail,value);
     }
     Print_linked_list(head);
     
     return 0;
 }