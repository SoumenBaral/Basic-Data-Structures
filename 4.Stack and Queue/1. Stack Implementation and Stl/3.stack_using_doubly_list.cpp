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
void push_back(Node*head,Node*&tail,int v,int sz) //insert at tail;
{
    sz++;
        Node *newNode = new Node(v);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->Previous = tail;
        tail->next = newNode;
        tail = tail->next; //  newNode;
}
void pop_back(Node* &head,Node* &tail,int sz) //delete from tail
{
    sz--;
        Node *deleteNode = tail;
        tail = tail->Previous;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;

}
int back(Node* tail)
{
    return tail->Previous->val;
}
int sized(Node* head)
{
    Node* tmp = head;
    int count = 0;
    while(tmp!=NULL)
    {
        count ++;
        tmp = tmp->next;
    }
    return count;
}

// class myStack
// {
//     public:
//         Node* head =NULL;
//         Node* tail = NULL;
//         int sz = 0;
//     void push(int val)
//     {
//         push_back(head,tail,val ,sz);
//     }
//     void pop()
//     {
//        pop_back(head,tail,sz);
//     }
//     int top()
//     {
//         return tail->val;
//     }
    
//     bool empty()
//     {
//         if(sz==0)return true;
//         else return false;
//     }
// };

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++;
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        newNode->Previous = tail;
        tail->next = newNode;
        tail = tail->next;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->Previous;
        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }

        delete deleteNode;
    }
    int top()
    {
        return tail->val;
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
    myStack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.top();
    s.pop();
    cout<<s.top();

    // myStack st;
    // int n;
    // cin>>n;
    // for(int i=0; i<n; i++)
    // {
    //     int x;
    //     cin>>x;
    //     st.push(x);
    // }
    // while (!st.empty())
    // {
    //     cout<<st.top()<<endl;
    //     st.pop();

    // }
    

    return 0;
}