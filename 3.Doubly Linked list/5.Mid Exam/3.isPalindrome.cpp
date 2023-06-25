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
    while(tmp !=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}



Node* insert_tail(Node* &head,Node*&tail,int v)
{
    
     Node* newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return head; 
    }
    tail->next=newNode;
    tail=newNode;
    return head;
}
Node* copyList(Node*head) {
        Node* newList= NULL;
        Node * tail =NULL;
        Node* current = head;
        while (current != NULL) {
            insert_tail(newList, tail,current->val);
            current = current->next;
        }
        return newList;
    }

void reverse(Node* &head,Node*cur)
{
    if(cur->next==NULL)
    {
        head=cur;
        return;
    }
    reverse(head,cur->next);
    cur->next->next=cur;
    cur->next=NULL;

}
void Is_Palindrome(Node* head1,Node*head2)
{   
    bool isExist=true; 
 
    while(head1 != NULL)
    {
        if(head1->val!=head2->val){
            isExist=false;
            break;
        }
       
        head1=head1->next;
        head2=head2->next;
    }
    if(isExist)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   
}
int main ()
{
    Node* head1= NULL;
    Node* tail1= NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_tail(head1,tail1,val);
    }
    Node*head2 =copyList(head1);
    reverse(head2,head2);
    Is_Palindrome(head1,head2);
    return 0;
}