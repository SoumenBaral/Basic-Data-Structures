#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
            Node(int val)
            {
                this->val=val;
                this->next=NULL;
                this->prev=NULL;
            }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
        if(tmp == NULL)
        {
            head = newNode;
            tail = newNode;
                return;
        }
        tail->next=newNode;
        newNode->prev = tail;
        tail = newNode;
}
void print(Node* head)
{
    Node* tmp = head;
        while(tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->next;
        }
        cout<<endl;
}
void reverse(Node* tail)
{
    Node* tmp = tail;
        while (tmp!=NULL)
        {
            cout<<tmp->val<<" ";
            tmp = tmp->prev;
        }
        cout<<endl;
        
}
int size(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp!=NULL)
    {
        count++;
        tmp= tmp->next;
    }
    return count;
}
void is_Same(Node* head1,Node* head2)
{
    Node* tmp1 = head1;
    Node* tmp2 = head2;
    bool flag = true;
        while(tmp1!=NULL)
        {
            if(tmp1->val!=tmp2->val)flag = false;
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
}
int main ()
{
    Node* head1 = NULL;
    Node* tail1 = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head1,tail1,val);
    }
    // print(head1);
    // reverse(tail1);

    Node* head2 = NULL;
    Node* tail2 = NULL;
    int v;
    while (true)
    {
        cin>>v;
        if(v==-1)break;
        insert_at_tail(head2,tail2,v);
    }

    if(size(head1)!=size(head2))cout<<"NO"<<endl;
    else is_Same(head1,head2);
   


    return 0;
}