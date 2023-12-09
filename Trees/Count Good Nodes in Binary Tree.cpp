class Solution {
public:
int x=0;
    void helper(TreeNode* root,int y){
        if(root==NULL){return;}
        y=max(y,root->val);
        helper(root->left,y);
        helper(root->right,y);
        if(root->val>=y){x++;}
    }

    int goodNodes(TreeNode* root) {
        helper(root,root->val);
        
        return x;
    }
};
