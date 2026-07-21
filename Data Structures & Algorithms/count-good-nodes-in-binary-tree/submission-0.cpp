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

    int f(TreeNode* root,int ma)
    {
        if(root==NULL)
            return 0;
        int k=0;
        if(root->val>=ma)
        {
            ma=root->val;
            k=1;
        }
        return k+f(root->left,ma)+f(root->right,ma);
    }
    int goodNodes(TreeNode* root) {

        return f(root,INT_MIN);
        
    }
};
