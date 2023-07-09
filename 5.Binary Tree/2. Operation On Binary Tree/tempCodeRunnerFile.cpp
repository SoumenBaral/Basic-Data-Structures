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
Node* input_tree()
{
    int val;
    cin>>val;
    Node*root;
    if(val==-1)root = NULL;
    else root = new Node(val);
    queue<Node*>q;
    if(root)q.push(root);
    while (!q.empty())
    {
        //1. queue dia front ta bar kora
        Node* f = q.front();
        q.pop();

        // 2. kaj gula kora 
         int l,r;
        cin>>l>>r;
        Node* left ;
        Node* right;
        if( l == -1)left=NULL;
        else left = new Node(l);
        if(r==-1)right = NULL;
        else right = new Node (r);
        f->left = left;
        f->right = right;

        // 3. children bar kore nia asa 
       if(root->left)q.push(f->left);
       if(root->right)q.push(f->right);

    }
    return root;
     
}
void Print_level_Order(Node* root){
    queue<Node*>q;
    q.push(root);
    while (!q.empty())
    {
        //Bar koira ana..
        Node* f = q.front();
        q.pop();

        //ja kaj korar korboo

        cout<<f->val<<" ";

        //children gola bar koira ana 

        if (f->left)q.push(f->left);
        if(f->right)q.push(f->right);

        
    }
    
}
int main ()
{
    Node*root = input_tree();
    Print_level_Order(root);
    return 0;
}