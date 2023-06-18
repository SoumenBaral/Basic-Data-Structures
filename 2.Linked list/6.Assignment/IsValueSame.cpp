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
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while (tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
    
    
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void Is_value_same(Node* head1,Node*head2)
{
    int sz1 = size(head1);
    int sz2 = size(head2);
    bool isExist=true; 
    if(sz1==sz2)
    {
        while(head1 != NULL && head2 != NULL)
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
    else cout<<"NO"<<endl;
}

int main ()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        insert_tail(head1, tail1, val1);
    }
   Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2,tail2, val2);
    }
    
    Is_value_same(head1,head2);
    return 0;
}