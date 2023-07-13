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
int printGivenLevel(Node* root, int lev)
{

    queue<pair<Node*,int>> q;
    queue<int>lO;
    q.push({root,0});
    int lav =0;
    while(!q.empty()){
        pair<Node*,int>  pr = q.front();
        Node* node = pr.first;
        int level = pr.second;
        q.pop();
        if(lev==level)lO.push(node->val);
        lav =level;
        if(node->left){
            q.push({node->left,level+1});
        }
         
        if(node->right){
            q.push({node->right,level+1});
        }
    }
    while (!lO.empty())
    {
        cout<<lO.front()<<" ";
        lO.pop();
    }
    
    return lav;
}


int main ()
{
    Node* root = input_Binary_tree();
    int lv;
    cin>>lv;
    int lav = printGivenLevel(root,lv);
    if(lav<lv){
        cout<<"Invalid";
    };
    return 0;
}