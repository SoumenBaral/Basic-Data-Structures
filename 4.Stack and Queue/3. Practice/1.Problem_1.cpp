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
class MyStack
{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head==NULL){
            head= newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->Previous = tail;
        tail = tail->next;
    }

    void pop(){
        sz--;
    if (head == NULL) {
        return;
    }
    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
    Node* deleteNode = tail;
    tail = tail->Previous;
    tail->next = NULL;
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
    MyStack a,b;
     int n,m;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    cin>>m;
    for(int i=0; i<m; i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    if(a.size()!=b.size())
    {
        cout<<"They are Not same"<<endl;
    }
    else{
        bool isSame = true;
        while (!a.empty())
        {
            int aVal = a.top();
            a.pop();
            int bVal = b.top();
            b.pop();
            if(aVal!=bVal)isSame = false;

        }
        if (isSame)
        {
            cout<<"They are same"<<endl;
        }
        else{
            cout<<"They are not same"<<endl;
        }
        
    };
    
    
    return 0;
}