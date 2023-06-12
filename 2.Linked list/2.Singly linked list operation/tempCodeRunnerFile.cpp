#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        cout<<endl<<"Inserted the Value at Head"<<endl<<endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhon last node e
    tmp->next = newNode;
    cout<<endl<<"Inserted the Value at tail"<<endl<<endl;
}

void print_linked_list(Node *head)
{
    cout<<endl;
    cout << "Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl<<endl;
}
void Insert_at_position(Node* head,int p,int v)
{
    Node* newNode = new Node(v);
    Node* tmp = head;
    for(int i=1; i<=p-1; i++)
    {   
        tmp=tmp->next;
        if(tmp=NULL)cout<<endl<<"Invalid Position"<<endl;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;

}
void Insert_at_head(Node*&head,int v)
{
    Node* newNode= new Node(v);
   newNode->next=head;
   head= newNode;
   cout<<"Head Inserted"<<endl;

}
void delete_from_position(Node*head,int p)
{
    Node* tmp=head;
    for(int i=1; i<p-1; i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
void  delete_head(Node*&head){
    Node *deleteHead = head;
    head= head->next;
    delete deleteHead;
    cout<<"Head deleted"<<endl<<endl;
};
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl; //done 
        cout << "Option 2: Print Linked List" << endl;//done
        cout << "Option 3: Insert at any Position"<<endl;//done
        cout << "Option 4: Insert at Head"<<endl;//done
        cout << "Option 5: Delete From Position"<<endl;
        cout << "Option 6: Delete Head"<<endl;
        cout << "Option 7: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if(op == 3)
        {
            int p,v;
            cout<<"Enter the position: ";
            cin>>p;
            cout<<"Enter the Value: ";
            cin>>v;
            if(p==0)Insert_at_head(head,v);
            else Insert_at_position(head,p,v);
        }
        else if(op==4)
        {
            int v;
            cout<<"Enter the Value: ";
            cin>>v;
            Insert_at_head(head,v);
        }
        else if(op==5)
        {
            int p;
            cout<<"Enter the postion That you Want to Delete: ";
            cin>>p;
            if(p==0)
            {
                delete_head(head);
            }
            
            else delete_from_position(head,p);
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }
    return 0;
}