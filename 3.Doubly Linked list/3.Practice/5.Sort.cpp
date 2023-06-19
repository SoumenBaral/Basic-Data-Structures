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
void sort_the_list(Node* &head)

{
    
    for(Node* i =head; i->next!=NULL; i= i->next )
    {
        for(Node* j = i->next; j!=NULL; j= j->next)
        {
            if(i->val>j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
}

int main ()
{
    Node* head = NULL;
    Node* tail = NULL;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        insert_at_tail(head,tail,val);
    }
    sort_the_list(head);
    print(head);
    reverse(tail);

    return 0;
}