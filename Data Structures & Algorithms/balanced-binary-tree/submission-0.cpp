/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int f1=0;
    int f(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=f(root->left);
        int right=f(root->right);

        if(abs(left-right)>=2)
        {
            f1=1;
        }

        return 1+max(left,right);
    }

    bool isBalanced(TreeNode* root) {

        f(root);
        if(f1==1)
            return false;
        return true;
        
        
        
    }
};
