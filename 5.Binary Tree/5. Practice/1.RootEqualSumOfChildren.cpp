#include<bits/stdc++.h>
using namespace std;

 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    bool checkTree(TreeNode* root) {
        // if(root == NULL)return false;
        queue<TreeNode*>q;
        if(root)q.push(root);
        while(!q.empty()){
            TreeNode* pr = q.front();
            q.pop();

            if(pr->left)q.push(pr->left);
            if(pr->right)q.push(pr->right);
            if(pr->left && pr->right){
                int sumOfChild = pr->left->val+pr->right->val;
                if(pr->val == sumOfChild)return true;
            }
            
        }
        return false ;



    }
};
int main ()
{
    
    return 0;
}