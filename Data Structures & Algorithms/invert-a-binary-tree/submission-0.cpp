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
    void f(TreeNode* root1, TreeNode* root2)
    {
        if(root1==NULL)
            return;
        if(root1->left)
        {
            TreeNode* temp=new TreeNode(root1->left->val);
            root2->right=temp;
            f(root1->left,root2->right);
        }
        if(root1->right)
        {
            TreeNode* temp=new TreeNode(root1->right->val);
            root2->left=temp;
            f(root1->right,root2->left);
        }
    }

    TreeNode* invertTree(TreeNode* root) {

        if(root==NULL)
            return root;

        TreeNode* root2=new TreeNode(root->val);
        f(root,root2);

        return root2;

        
    }
};
