
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

void insert_at_tail(Node* &head, Node* &tail ,int val)
{
    Node* newNode = new Node(val);
    if(head==NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}
void deleteFromHead(Node*&head ,Node* & tail){
    Node* deletedNode = head;
    head = head->next;
    delete deletedNode;
     if (head == NULL)
        {
            tail = NULL;
        }

}
class myQueue
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        insert_at_tail(head,tail,val);
    }
    void pop(){
        sz--;
        deleteFromHead(head,tail);
    }
    int size()
    {
        return sz;
    }
    bool isEmpty()
    {
        if(sz==0)return true;
        else return false;
    }
    int front(){
        return head->val;
    }
    
};
int main ()
{
   myQueue q;
    int val;
    while (true)
    {
        cin>>val;
        if(val==-1)break;
        q.push(val);

    }
       while (!q.isEmpty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    

        return 0;
}