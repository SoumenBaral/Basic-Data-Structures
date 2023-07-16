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
Node* convert(int ar[], int l, int r){
    if(l>r)return NULL;
    int mid = (l+r)/2;
    Node* root = new Node(ar[mid]);
    Node* left = convert(ar,l,mid-1);
    Node* right = convert (ar,mid+1,r);
    root->left = left;
    root->right = right;
    return root;
}
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

int main ()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n;i++)cin>>ar[i];
   Node* root = convert(ar,0,n-1);
   level_Order_print(root);

    return 0;
}