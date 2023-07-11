#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 

    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };

vector<int>v;
void INOrder(TreeNode* root){
    if(root==NULL)return;
    INOrder(root->left);
    v.push_back(root->data);
    INOrder(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    // Write your code here.
    v.clear();
    INOrder(root);
    return v;

}
int main ()
{
    
    return 0;
}