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
public:  int minVal;
         long long secMin=LLONG_MAX;
         void dfs(TreeNode*root){
            if(root==nullptr) return;
            if(secMin>root->val && root->val>minVal){
                secMin=root->val;
            }
            dfs(root->left);
            dfs(root->right);
         }
    int findSecondMinimumValue(TreeNode* root){
        minVal=root->val;
    dfs(root);
    if(secMin==LLONG_MAX) return -1;
    return secMin;
    }
};
