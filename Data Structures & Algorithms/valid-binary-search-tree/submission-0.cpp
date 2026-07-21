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

    bool f(TreeNode* root,int ma,int mi)
    {
        if(root==NULL)
            return true;
        bool k=true;
        if(root->val<=mi || root->val>=ma)
            k=false;
        
        return k && f(root->left,root->val,mi) && f(root->right,ma,root->val);
    }

    bool isValidBST(TreeNode* root) {
        
        return f(root,INT_MAX,INT_MIN);

    }
};
