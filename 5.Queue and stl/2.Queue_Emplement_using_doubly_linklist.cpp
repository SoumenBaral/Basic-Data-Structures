#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node*Previous;
        Node*next;
        
        Node(int val)
        {
            this->val=val;
            this->Previous=NULL;
            this->next=NULL;
        }
};
class MyQueue
{
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int sz = 0;

        void Push(int val)
        {
            sz++;
            Node* newNode = new Node(val);
            if(head ==NULL){
                head = newNode;
                tail = newNode; 
                return;
            }
            tail->next = newNode;
            newNode->Previous = tail;
            tail = tail->next;

        }
        void POP(){
            sz--;
            Node* deleteNode = head;
            head = head->next;
            if(head==NULL) tail = NULL;
            else{
                head->Previous =NULL;
                delete deleteNode;
            }
        }

    int front()
    {
        return head->val;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main ()
{
     MyQueue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.Push(x);
    }
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.POP();
    }
    return 0;
}