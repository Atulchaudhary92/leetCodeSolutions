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
//  using single stack.
class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr = root;
        TreeNode* prev = nullptr;
        vector<int>ans;
        
        while(curr != nullptr || !st.empty()) {
            
        // 1. Go left
        while(curr){
            st.push(curr);
            curr=curr->left;
        }
         // 2. Get top
        curr=st.top();
        
        // 3. Decide:
        //    - go right
        if(curr->right!=nullptr && prev!=curr->right)
        curr=curr->right;     
        
        //    - OR process current node
        else{
            ans.push_back(curr->val);
            st.pop();
            prev=curr;
            curr=nullptr;
        }

}
return ans;
    }
};
