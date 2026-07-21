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
    int f(TreeNode* root,TreeNode* p,TreeNode* q,TreeNode* &ans)
    {
        if(root==NULL)
            return 0;
    
        int left=f(root->left,p,q,ans);
        int right=f(root->right,p,q,ans);
        int k=0;
        if(root==p || root==q)
            k+=1;
        if(left+right+k==2)
        {
            ans=root;
            return 0;
        }
        return left+right+k;
    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {


        TreeNode* ans=NULL;
        f(root,p,q,ans);

        return ans;
            
        
    }
};
