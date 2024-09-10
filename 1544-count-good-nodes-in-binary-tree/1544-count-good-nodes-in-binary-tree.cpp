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
    int find(TreeNode* root,int maxi)
    {
        if(root==nullptr) return 0;
        int res;
        if(root->val>=maxi) res=1;
        else res=0;
        maxi=max(maxi,root->val);
        res+=find(root->left,maxi);
        res+=find(root->right,maxi);
        return res;
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int ans=find(root,root->val);
        return ans;

    }
};