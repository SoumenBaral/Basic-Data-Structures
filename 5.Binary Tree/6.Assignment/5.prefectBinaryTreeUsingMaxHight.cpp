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
int countMaxHight(Node* root){ 
    if(root ==NULL) return 0;
    int l = countMaxHight(root->left);
    int r = countMaxHight(root->right);
    return max(l,r)+1;

}
int element = 0;
void count(Node* root){
    if(root == NULL) return;
    element++;
    if(root->left)count(root->left);
    if(root->right)count(root->right);
}
int main ()
{
    Node* root = input_Binary_tree();
    count(root);
    int h = countMaxHight(root);
    if (pow(2, h) - 1 == element)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}