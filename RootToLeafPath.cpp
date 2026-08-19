/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    vector<vector<int>> result;
    
    
    bool isLeaf(Node*root){
        return root && !root->left && !root->right;
    }
    
    void duplicate(Node*root,vector<int>&arr){
        if(!root) return;
        arr.push_back(root->data);
        if(isLeaf(root)){
            result.push_back(arr);
            arr.pop_back();
            return;
        }
        
        duplicate(root->left,arr);
        duplicate(root->right,arr);
        arr.pop_back();
    }
    vector<vector<int>> paths(Node* root) {
       vector<int> dup;
       duplicate(root,dup);
     return result;}
   
};
