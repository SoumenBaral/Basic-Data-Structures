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
void Is_palindrome(Node* head,Node* tail)
{
    Node* i = head;
    Node* j = tail;
    bool flag = true;
        while(i!=j && i->next!=j )
        {
            if(i->val!=j->val)flag = false;
            i = i->next;
            j = j->prev;
            
        }
        if(i->val!=j->val)cout<<"NO"<<endl;
        else if(flag)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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
    Is_palindrome(head,tail);
    print(head);
 

   


    return 0;
}