#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* left;
        Node* right;
        
        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right= NULL;
        }
};
Node* input_Binary_tree(){
    int val;
    cin>>val;
    Node* root;
    if(val==-1)root = NULL;
    else root= new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* left;
        Node* right;
        if(l == -1)left = NULL;
        else left = new Node(l);
        if(r== -1)right = NULL;
        else right = new Node(r);
        f->left = left;
        f->right = right;
        if(f->left)q.push(left);
        if(f->right)q.push(right);
    }
    
return root;
}
void printReverseFromRight(Node* root){
    queue <int> p;
    queue<Node*>q;
    stack<int>st;
    if(root)q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        p.push(f->val);
        if(f->right)q.push(f->right);
        if(f->left)q.push(f->left);
    }
    
    while (!p.empty())
    {
        
        st.push(p.front());
        p.pop();
    }
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    
}

int main ()
{
    Node* root = input_Binary_tree();
   printReverseFromRight(root);
    return 0;
}