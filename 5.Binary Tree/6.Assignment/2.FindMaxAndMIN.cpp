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
int max(Node* root){
    int mx = INT_MIN;
     queue<Node*>q;
    if(root)q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left==NULL&&f->right==NULL){
            if(mx<f->val) mx = f->val;
        }
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return mx;
}
int min(Node* root){
    int mn = INT_MAX;
     queue<Node*>q;
    if(root)q.push(root);
    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();
        if(f->left==NULL&&f->right==NULL){
           if(mn>f->val) mn = f->val;
        }
        
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return mn;
}
int main ()
{
    Node* root = input_Binary_tree();
    int mx = max(root);
    int mn = min(root);
    cout<<mx<<" "<<mn;
    return 0;
}