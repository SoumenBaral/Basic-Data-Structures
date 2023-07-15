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
    Node* root;
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
        if(r == -1)right = NULL;
        else right = new Node (r);
        f->left = left;
        f->right = right;

          // 3. children bar kore nia asa 
       if(f->left)q.push(f->left);
       if(f->right)q.push(f->right);
        
    }
    return root;
     
}
// void print_tree(Node* root){
//     if(root==NULL)return;
//     cout<<root->val<<" ";

//     if(root->left)print_tree(root->left);
//     if(root->right)print_tree(root->right);
// }
void level_Order_print(Node* root){
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
    
};
bool search(Node* root,int val){
    if(root==NULL)return false;
    if(root->val==val)return true;
    if(val<root->val){
        return  search(root->left,val);

    }
    if(val>root->val){
        return  search(root->right,val);
        

    }
    return false;
}
int main ()
{
    Node* root = input_tree();
    // print_tree(root);
    level_Order_print(root);
   bool isExist = search( root,43);
   if(isExist)cout<<endl<<"Found"<<endl;
   else cout<<endl<<"NOT Found";

    return 0;
}