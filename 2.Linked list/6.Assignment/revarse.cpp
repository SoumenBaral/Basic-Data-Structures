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


void print_reverse(Node* head)
{
    Node* tmp=head;
    if(tmp==NULL)return;
    
    print_reverse(tmp->next);
    cout<<tmp->val<<" ";
    
}
// void print_original(Node* head)
// {
//      Node* tmp=head;
//     if(tmp==NULL)return;
//     cout<<tmp->val<<" ";
//     print_reverse(tmp->next);
    
// }
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    print_reverse(head);
    cout<<endl;
    print_linked_list(head);
    return 0;
}