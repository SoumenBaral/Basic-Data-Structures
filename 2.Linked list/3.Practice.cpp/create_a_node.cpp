#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int value;
        Node* next;
            Node(int value)
            {
                this->value=value;
                this->next=NULL;
            }

};
int main()
{
        Node* head=new Node(10);
        Node* a=new Node(20);
        Node* b = new Node(30);
        Node* c = new Node(40);
        
        // head->next=a;
        // a->next=b;
        // b->next=c;
        // cout<<head->value<<" "<<a->value<<" "<<b->value<<endl<<endl; ---------->we Gor same output via loop;

        Node* tmp=head;
        while(tmp->next!=NULL)
        {
            cout<<tmp->value<<" ";
            tmp=tmp->next;
        }

    return 0;
}
