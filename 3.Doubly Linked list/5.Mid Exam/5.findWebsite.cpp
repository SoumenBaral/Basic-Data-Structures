#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        string val;
        Node*Previous;
        Node*next;
        
        Node(string val)
        {
            this->val=val;
            this->Previous=NULL;
            this->next=NULL;
        }
};
void insert_at_tail(Node* &head,Node* &tail , string val)
{
    Node* newNode = new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->Previous=tail;
    tail=newNode;
}
void print(Node* head)
{
    Node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout<<endl;
}
void visit_search(Node* head,Node* &current,string site)
{
    Node* tmp = head;
    bool found = false; 
   
    while(tmp!=NULL)
    {
        if(tmp->val==site)
        {
            found = true;
           current = tmp;
           break;
        }
        tmp = tmp->next;
    }
    if(found)
    {
        cout<<current->val<<endl;

    }
    else{
        cout<<"Not Available"<<endl;
    }
}
void next_webSite(Node*&current)
{
    if(current->next!=NULL)
    {
        cout<<current->next->val<<endl;
        current=current->next;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }

}
void prev_webSite(Node*&current)
{
    if(current->Previous!=NULL)
    {
        cout<<current->Previous->val<<endl;
        current=current->Previous;
    }
    else
    {
        cout<<"Not Available"<<endl;
    }

}
int main ()
{
    Node* head=NULL;
    Node* tail =NULL;
    Node* current = NULL;
    string val;
    while(true)
    {
        cin>>val;
        if(val=="end")break;
       insert_at_tail(head,tail,val);
    }
//    print(head);
    int quires;
    cin>>quires;
    while(quires--)
    {
        string address;

        cin>>address;
        if(address=="visit")
        {
            string site;
            cin>>site;
            visit_search(head,current,site);
        }
        else if(address=="next")
        {
            next_webSite(current);
        }
        else if(address =="prev")
        {
            prev_webSite(current);
        }

    }

   
    

   
    return 0;
}