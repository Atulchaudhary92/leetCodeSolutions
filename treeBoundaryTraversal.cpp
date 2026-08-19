/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  vector<int>ans;
  bool isLeaf(Node*root){
      return root && !root->left && !root->right;
  }
  void traverse(Node*root){
      if(!root) return ;
      if(isLeaf(root)) ans.push_back(root->data);
      traverse(root->left);
      traverse(root->right);
  }
  void right(Node*root){
      if(!root) return;
      if(root->right)
      right(root->right);
      else 
      right(root->left);
      if(!isLeaf(root)) ans.push_back(root->data);
  }
  void left(Node*root){
      if(!root) return;
      if(!isLeaf(root))
      ans.push_back(root->data);
      if(root->left)
      left(root->left);
      else 
      left(root->right);
      
      
  }
    vector<int> boundaryTraversal(Node *root) {
        if(!root) return {};
        
        if(!isLeaf(root)){
            ans.push_back(root->data);
        }
        left(root->left);
        traverse(root);
        right(root->right);
        return ans;   
    }
};
