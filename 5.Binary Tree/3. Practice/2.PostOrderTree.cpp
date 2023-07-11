#include<bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h> 


class TreeNode 
{
   public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) 
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

vector<int> v;
void PostOrder(TreeNode* root){
    if(root==NULL)return;
    PostOrder(root->left);
    PostOrder(root->right);
    v.push_back(root->val);
}
vector<int> postorderTraversal(TreeNode* root)
{
    // Write your code here	
    v.clear();
    PostOrder(root);
    return v;

}

int main ()
{
    
    return 0;
}