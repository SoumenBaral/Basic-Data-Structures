#include<bits/stdc++.h>
using namespace std;
/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

class Stack
{
    //Write your code here

public:
    Stack()
    {
        //Write your code here 
    
    }
     Node* head = NULL;
     Node* tail = NULL;
     int sz=0;
    int getSize()
    {
        //Write your code here
        return sz;
    }

    bool isEmpty()
    {
        //Write your code here  
        if(sz==0)return true ;
        else return false;
    }

    void push(int data)
    {
        //Write your code here
        sz ++;
        Node* newNode = new Node(data);
        Node* tmp = head;
        if(tmp==NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;

    }

    void pop()
    {
        //Write your code here
        if(sz==0) return;
        Node* tmp = head;
        if(head==NULL){
            return;
        }
        sz--;

    if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }
        // Node* tmp = head;
    while (tmp->next != tail) {
        tmp = tmp->next;
    }

    delete tail;
    tail = tmp;
    tail->next = NULL;
    }

    int getTop()
    {
        if(sz==0) return -1;
        return tail->data;
        //Write your code here
    }
};
int main ()
{
    
    return 0;
}