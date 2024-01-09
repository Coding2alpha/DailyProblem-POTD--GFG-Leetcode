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

    void inorder(int &sum,TreeNode* root, int low, int high)
    {
        if(root==NULL)
        {
            return ;
        }
        inorder(sum,root->left,low,high);
        if(root->val>=low && root->val<=high)
        {
            sum+=root->val;
        }
        inorder(sum,root->right,low,high);;
    }

    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        inorder(sum,root,low,high);
        return sum;
    }
};