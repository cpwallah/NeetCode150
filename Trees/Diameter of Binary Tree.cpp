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
    int ans=0;
    int diameterOfBinaryTree(TreeNode* root) {
        maow(root);
        if(root==0){
            return 0;
        }
        return ans;
    }
    int maow(TreeNode *root){
        if(root==NULL){
            return 0;
        }
        int l=maow(root->left);
        int r=maow(root->right);
        ans=max(ans,l+r);
        return 1+max(l,r);
    }
};
