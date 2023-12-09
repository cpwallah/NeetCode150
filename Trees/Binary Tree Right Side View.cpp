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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        q.push(NULL);
        vector<vector<int>>v1;
        if(root==NULL){
            return {};
        }
        vector<int>v;
        while(!q.empty()){
            TreeNode *temp=q.front();
            q.pop();
            if(temp==NULL){
                if(!q.empty()){
                   q.push(NULL);
               }
                v1.push_back(v);
            v.clear();
            }
            else{
                v.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
        }
        vector<int>ans;
        for(int j=0;j<v1.size();j++){
            ans.push_back(v1[j][v1[j].size()-1]);
        }
        return ans;
    }
};
