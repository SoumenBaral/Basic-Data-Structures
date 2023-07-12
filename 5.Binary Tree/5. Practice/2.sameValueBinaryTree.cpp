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
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode*>q;
        if(root)q.push(root);
        while(!q.empty()){
            TreeNode* pr = q.front();
            q.pop();
            if(pr->left){
                 q.push(pr->left);
                 if(pr->val != pr->left->val)return false;
            }
            if(pr->right){
               q.push(pr->right); 
               if(pr->val!=pr->right->val)return false;
            }
           
            
        }
        return true ;

    }
};
int main ()
{
    
    return 0;
}